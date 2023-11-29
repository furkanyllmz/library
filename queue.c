#include<stdio.h>
#include<stdlib.h>
int *dizi=NULL;
int sira=0,sirabasi=0,boyut=2;
int deque(){
    if(sira==sirabasi){
        printf("dizi bos");
        return -1;

    }
    if(sira-sirabasi<=(boyut/4)){
        int *dizi2=(int*)malloc(sizeof(int)*boyut/2);
        for(int i=0;i<sira-sirabasi;i++){
            dizi2[i]=dizi[sirabasi+i];

        }
        sira-=sirabasi;
        sirabasi=0;
        free(dizi);
        dizi=dizi2;
        boyut/=2;
    }
    return dizi[sirabasi++];
}
void toparla(){
    if(sirabasi==0){
        return ;
    }
    for(int i=0;i<boyut;i++){
        dizi[i]=dizi[sirabasi+i];
    }
    sira=sira-sirabasi;
    sirabasi=0;
    
}
void enque(int x){
    if(dizi==NULL){
        dizi=(int*)malloc(sizeof(int)*2);
    }
    if(sira>=boyut){
        boyut*=2;
        int *dizi2=(int*)malloc(sizeof(int)*boyut);     
        for(int i=0;i<boyut/2;i++){
            dizi2[i]=dizi[i];
            
        }
        free(dizi);
        dizi=dizi2;
    }
    dizi[sira++]=x;
}
void bastir(){
    for(int i=0;i<sira;i++){
        printf("%d ",dizi[i]);
    }
}
int main(){
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    enque(60);
    toparla();
    deque();
    deque();
    deque();
    deque();
    deque();
    toparla();
    bastir();
    printf("\n%d %d %d",boyut,sirabasi,sira);















    return 0;
}