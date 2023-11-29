#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *next;

};
void sondanekle(struct node *root,int x){
    struct node *iter;
    iter=root;
    while(iter->next!=root)
        iter=iter->next;
        
    iter->next=(struct node*)malloc(sizeof(struct node));
    iter->next->data=x;
    iter->next->next=root;
    
}    

void bastir(struct node *root){
    struct node *iter;
    printf("%d ",root->data);
    iter=root->next;
    while(iter!=root){

        printf("%d ",iter->data);
        iter=iter->next;
    }


}     
struct node * sil(struct node *root,int x){
    struct node *temp;
    struct node *iter;
    iter=root;
    if(iter->data==x){
        temp=iter;
        while(iter->next!=root)
            iter=iter->next;

        iter->next=root->next;
        root=root->next;
        free(temp);
        return root;
        
    }

    while(iter->next->data!=x && iter->next!=root){
        iter=iter->next;

    }

    if(iter->next==root){
        printf("bulunamadi\n ");
        return root;
    }
    
    temp=iter->next;
    iter->next=iter->next->next;
    free(temp);
    return root;
    




}




int main(){
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    root->next=root;
    root->data=0;
    sondanekle(root,20);
    sondanekle(root,30);
    sondanekle(root,40);
    root=sil(root,40);
    root=sil(root,20);
    root=sil(root,0);
    root=sil(root,70);
    
    bastir(root);























    return 0;
}