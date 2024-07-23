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
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("MAX IS %d",max);
    return 0;
}