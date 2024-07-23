#include<stdio.h>

int main(){
    int n,x=10,sum=0;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n ; i++){
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i]+arr[j]==x){
                printf("%d,%d\n",arr[i],arr[j]);
            }
        } 
    }
    return 0;
}