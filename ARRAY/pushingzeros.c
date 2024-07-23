#include<stdio.h>
#include<stdbool.h>


int main(){
    int i,n,TARGET=12,check=1;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n-1; j++)
        {
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    
    return 0;
}