#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n],check=0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    int i = 0,j = n - 1;
    while(i<j){
        if(arr[i]==arr[j]){
            check++;
        }
        j--;
        i++;
    }
    if (check==n/2){
        printf("PALINDROME");
    }else {
        printf("NOTPALINDROME");
    }
    
    return;
}
    
