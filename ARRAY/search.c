#include<stdio.h>

int main(){
    int x,arr[10]={1,2,3,4,5,6,7,8,9};
    printf("enter finding number 1-9");
    scanf("%d",&x);

    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==x){
            printf("%d is present",x);
            break;
        }
    }
    

    return;
}
   