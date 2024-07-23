#include<stdio.h>

int main(){
    int n,x=12,sum=0;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n ; i++){
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x){
                    printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
                }

            }
            
        }
        
    }
    return 0;
}