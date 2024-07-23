#include<stdio.h>

int main(){
    int n,sumE=0,sumO=0;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
        if (i%2==0)
        {
            sumE += arr[i];
        }else {
            sumO += arr[i];
        }
    }
    if(sumE>sumO){
        printf("\n\n%d",sumE-sumO);
    }else {
        printf("\n\n%d",sumO-sumE);
    }
    return 0;
}