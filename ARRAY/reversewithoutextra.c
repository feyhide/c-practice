#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n],temp;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    int i = 0,j = n - 1;
    while(i<j){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return;
}
    
