#include<stdio.h>

void inputarray(int arr[][3],int i,int j,int endx,int endy){
    if(i==endx) return;
    if(j<endy){
        printf("%dx%d: ",i+1,j+1);
        scanf("%d",&arr[i][j++]);
        inputarray(arr,i,j,endx,endy);
    }else{
        inputarray(arr,++i,0,endx,endy);
    }
}
void printarray(int arr[][3],int i,int j,int endx,int endy){
    if(i==endx) return;
    if(j<endy){
        printf("%d",arr[i][j++]);
        printarray(arr,i,j,endx,endy);
    }else{
        printf("\n");
        printarray(arr,++i,0,endx,endy);
    }
}
int main(){
    int arr[3][3];
    inputarray(arr,0,0,3,3);
    printarray(arr,0,0,3,3);
    return 0;
}