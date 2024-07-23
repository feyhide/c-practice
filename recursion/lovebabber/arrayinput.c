#include<stdio.h>

void inputarray(int arr[],int s,int e){
    if(s==e) return;
    printf("%d: ",s+1);
    scanf("%d",&arr[s]);
    inputarray(arr,++s,e);
}
void printarray(int arr[],int s,int e){
    if(s==e) return;
    printf("%d: %d\n",s+1,arr[s]);
    printarray(arr,++s,e);
}
int main(){
    int arr[3];
    inputarray(arr,0,3);
    printarray(arr,0,3);
    return 0;
}