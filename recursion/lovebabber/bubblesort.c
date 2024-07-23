#include<stdio.h>
void printbhikarden(int arr[],int l){
    for (int i = 0; i <= l; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void sortkarden(int arr[],int l){
    int i=0;
    if(l==0) return;
    for (i = 0; i <= l; i++)
    {
        if (arr[i]>arr[l])
        {
            int temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
            printbhikarden(arr,4);
            sortkarden(arr,--l);
        }
    }
}
int main(){
    int arr[]={5,3,1,2,4};
    sortkarden(arr,4);
    printbhikarden(arr,4);
    return 0;
}