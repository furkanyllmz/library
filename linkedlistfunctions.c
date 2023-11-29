#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *next;

};
void sondanekle(struct node *iter,int x){
    if(iter!=NULL){
        while(iter->next!=NULL)
            iter=iter->next;
        
        iter->next=(struct node*)malloc(sizeof(struct node));
        iter->next->data=x;
        iter->next->next=NULL;
    }
}    

void bastir(struct node *iter){
    while(iter!=NULL){
        printf("%d ",iter->data);
        iter=iter->next;
    }



}     
struct node * sil(struct node *root,int x){
    struct node *temp;
    struct node *iter;
    temp=(struct node*)malloc(sizeof(struct node));
    iter=root;
    if(iter->data==x){
        temp=iter;
        root=iter->next;
        free(temp);
        return root;
    }

    while(iter->next->data!=x && iter->next!=NULL){
        iter=iter->next;

    }
    
    temp=iter->next;
    iter->next=iter->next->next;
    free(temp);
    return root;
    




}
struct node * siraliekle(struct node *root,int x){
        struct node *temp;
        struct node *iter;
    
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;


        iter=root;

        if(iter->data > x){
            
            temp->next=root;
            return temp;
        }

        while(iter->next!=NULL && iter->next->data<x){
            iter=iter->next;
           
            
        }
        
        if(iter->next!=NULL){
            temp->next=iter->next;
            iter->next=temp;
            return root;
        }

        
        if(iter->next==NULL){
            iter->next=temp;
            temp->next=NULL;

            
            return root;
        }
        
        
            
        
       

        



        
}



int main(){
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    root->next=NULL;
    root->data=1;
     
    sondanekle(root,15);
    sondanekle(root,25);
    root=siraliekle(root,17);
    root=siraliekle(root,2);
   
    root=siraliekle(root,26);
    
    bastir(root);






















    return 0;
}