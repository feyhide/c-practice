#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n],arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr1[i]=arr[n-1-i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    return;
}
    
