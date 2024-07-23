#include<stdio.h>

int main(){
    int n,max=-113213,smax=-123212;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
        if (max<arr[i])
        {
            smax = max;
            max = arr[i];
        }else if(smax<arr[i]){
            smax = arr[i];
        }
    }
    printf("SECOND MAX IS %d",smax);
    return 0;
}