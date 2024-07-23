#include<stdio.h>

int main(){
    int n,d=2;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n],temp;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i+d<n)
        {
            temp = arr[i];
            arr[i]= arr[i+d];
            arr[i+d]= temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return;
}
    
