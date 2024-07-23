#include<stdio.h>

int main(){
    int n,max=0;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
        printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]%2==0){
            arr[i]=arr[i]*2;
        }else {
            arr[i]=arr[i]*10;
        }
    }
        printf("\n\n");    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}