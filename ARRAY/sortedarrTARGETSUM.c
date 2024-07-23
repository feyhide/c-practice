#include<stdio.h>

int main(){
    int i,n,TARGET=8;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    int j=n-1;
        i=0;
    while(i<j){
        if(arr[i]+arr[j]==TARGET){
            printf("%d %d SUMMM",arr[i],arr[j]);
            break;
        }else if(arr[i]+arr[j]>TARGET){
            j--;
        }else {
            i++;
        }
    }
    
    return 0;
}