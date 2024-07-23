#include<stdio.h>

int main(){
    int arr[10];
    for(int i=0;i<5;i++){
        printf("ENTER %d \n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        if(arr[i]<35){
            printf("ROLL NO %d  MARKS %d\n",i+1,arr[i]);
        }
    }
    
    return 0;
}