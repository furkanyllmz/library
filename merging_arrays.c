#include<stdio.h>
int main(){

    int arr1[4]={20,30,40,50};
    int arr2[6]={21,27,35,41,56,97};
    int arr3[50];
    int i,j,arrlen1,arrlen2,min1,min2;
    int k=0;
    min1=arr1[0];
    min2=arr2[0];
    for(i=0;i<4;i++){
        arr3[i]=arr1[i];
    }

    for(j=0;j<6;j++){
        arr3[i]=arr2[j];
        i++;
    }
    for(j=0;j<10;j++){
        for(i=0;i<9;i++){
            if(arr3[i]>arr3[i+1]){
                min1=arr3[i+1];
                arr3[i+1]=arr3[i];
                arr3[i]=min1;
            }    
        }
    }




    for(i=0;i<10;i++){
        printf("%d ",arr3[i]);
    }
    













    return 0;
}