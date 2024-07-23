#include<stdio.h>

int main(){
    int i,n,x,start=0,sum=0;
    printf("ENTER HOW MANY NUMBERS YOU WANT TO ADD IN ARRAY\n");
    scanf("%d",&n);
    int arr[n],idx[n];
    for ( i = 0; i < n; i++)
    {
        printf("ENTER %d ELEMENT IN ARRAY\n",i+1);
        scanf("%d",&arr[i]);    
    }
    
    printf("ENTER THE TARGET SUM IN ARRAY\n");
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {   
        sum+=arr[i];
        while (sum>x)
        {
            sum -= arr[start];
            start++;
        }
        if (sum==x)
        {
            printf("The Elements from Index %d to %d when summed results in the output of %d\n", start, i, x);
        }
        if(i==4 && sum!=x)
        {
            printf("No Subarray found");
        }
    }
    
    return 0;
    }