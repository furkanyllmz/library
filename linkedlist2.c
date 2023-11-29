#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 



};
struct node * delete(int x,struct node *iter){
    int i;
    struct node *temp;
    
    if(iter->data==x){
        temp=iter;
        iter=iter->next;
        free(temp);
        return iter;
    }    
    while(iter->next!=NULL && iter->next->data!=x){
        iter=iter->next;
    }    
    if(iter->next==NULL){
        printf("bulunamadı");
        return iter;
    }
        

    
    temp=iter->next;
    iter->next=iter->next->next;
    free(temp);

}
int main(){
    struct node * root;
    struct node *iter;
    root=(struct node*)malloc(sizeof(struct node));
    root->next=NULL;
    int input;
    iter=root;
    

    
    while(1){
        scanf("%d",&input);
        if(input==-1)
            break;
        iter->next=(struct node*)malloc(sizeof(struct node));
        
        iter->data=input;
        iter=iter->next;
        iter->next=NULL;

    }
    iter=root;
    iter=delete(40,iter);
    while(iter->next!=NULL){
        printf("%d ",iter->data);
        iter=iter->next;

    }














    return 0;
}
