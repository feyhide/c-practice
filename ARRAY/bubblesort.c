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
        bool flag = false; 
        for (i = 0; i < n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                flag = true;
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        if (flag = false)
        {
            break;
        }   
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    
    return 0;
}