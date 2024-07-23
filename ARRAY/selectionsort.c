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


    for (int j = 0; j < n-1; j++)
    {
        int min = 23332234; 
        int minidx = -1;
        for (i = j; i < n; i++)
        {
            if (arr[i]<min)
            {
                min = arr[i];
                minidx = i;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[j];
        arr[j] = temp;
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

   return 0;
}