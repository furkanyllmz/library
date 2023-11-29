#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
};

struct node *deque(struct node *root){
    struct node *temp;
    if(root==NULL){
        printf("liste bos");
        return root;
    }
    temp=root;
    root=root->next;
    free(temp);
    return root;
}

struct node *enque(struct node *root,int x){
    struct node *iter;
    iter=root;
    if(root==NULL){
        root=(struct node*)malloc(sizeof(struct node));
        root->data=x;
        root->next=NULL;
        return root;
    }
    while(iter->next!=NULL)
        iter=iter->next;
    iter->next=(struct node*)malloc(sizeof(struct node));
    iter->next->data=x;
    iter->next->next=NULL;
    return root;    
}
void bastir(struct node *root){
    while(root!=NULL){
        printf("%d ",root->data);
        root=root->next;
    }    
}
int main(){
    struct node *root;
    root=NULL;
    root=enque(root,10);
    root=enque(root,20);
    root=enque(root,30);
    root=enque(root,40);
    root=deque(root);
    root=deque(root);
    root=deque(root);
    root=deque(root);
    root=enque(root,40);
    root=enque(root,50);
    root=deque(root);
    

    
    bastir(root);





}