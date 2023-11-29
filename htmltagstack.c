#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node{
    struct node *next;
    char deger[15];
};
struct node * delete(char *deger,struct node *iter){
    int i;
    struct node *temp;
    
    if(strcmp(iter->deger,deger) == 0){
        temp=iter;
        iter=iter->next;
        free(temp);
        return iter;
    }    
    while(iter->next!=NULL && strcmp(iter->next->deger, deger) == 1){
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
void bastir(struct node *iter){
    while (iter != NULL)
    {
        printf("%s ", iter->deger);
        iter = iter->next;
    }
}
char *peek(struct node *iter){
    while(iter->next!=NULL)
        iter=iter->next;
    return iter->deger;    
}
struct node *pop(struct node *root){
    struct node *temp;
    if (root == NULL){
        printf("liste bos");
        return root;
    }
    struct node *iter=root;
    if(iter->next==NULL){
        free(iter);
        return NULL;
    }
    while (iter->next->next != NULL)
        iter = iter->next;
    
    temp=iter->next;
    iter->next = NULL;
    free(temp);
    return root;
}
struct node *push(struct node *root, char *deger){
    int i = 0;
    if(root==NULL){
        root=(struct node *)malloc(sizeof(struct node));
        root->next=NULL;
        strcpy(root->deger,deger);
        return root;

    }
    struct node *iter=root;
    while (iter->next != NULL)
        iter = iter->next;
    iter->next = (struct node *)malloc(sizeof(struct node));
    strcpy(iter->next->deger,deger);
    iter->next->next = NULL;
    return root;
}
int main(){
    struct node *root=NULL;
    struct node *toor=NULL;
    struct node *iter=root;
    struct node *iter2=toor;
    char deger[15];
    char cumle[1000];
    char deger2[15];
    int i=0;
    int j=0;
    fgets(cumle,1000,stdin);
    while(cumle[i]!='\0'){
        if(cumle[i]=='<'){
            i++;
            if(cumle[i]!='/'){
                j=0;
                while (cumle[i]!='>'){
                    deger[j]=cumle[i];
                    j++;
                    i++;
                }
                deger[j]='\0';
                root=push(root,deger);
            }
            else{
                i++;
                j=0;
                while(cumle[i]!='>'){
                    deger2[j]=cumle[i];
                    j++;
                    i++;
                }
                deger2[j]='\0'; 
                toor=push(toor,deger2);
                iter=root;
                iter2=toor;
                }   
            
        }
        
        i++;
    }
    while(iter2->next!=NULL){
        if (strcmp(iter2->deger, peek(iter)) == 0) {
            root=pop(root);
            
            
        } 
        else {
            iter2=iter2->next;
        }    
    }
    bastir(iter);
    printf("\n");
    bastir(toor);
    if(root==NULL){
        printf("correct\n");
    }
    else{
        printf("error <%s>\n",peek(root));
    }
    return 0;
}