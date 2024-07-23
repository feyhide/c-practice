#include<stdio.h>
void solve(int arr[],int s,int e){
    if(s==e){
        for (int i = 0; i < e; i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
        
        return;
    }
    for (int i = s; i < e; i++)
    {
        int temp = arr[s];
        arr[s] = arr[i];
        arr[i] = temp;

        solve(arr,s+1,e);
        
        temp = arr[s];
        arr[s] = arr[i];
        arr[i] = temp;

    }
    
}
int main(){
    int arr[]={1,2,3,4};
    solve(arr,0,4);
    return 0;
}