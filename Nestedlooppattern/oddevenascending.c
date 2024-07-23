#include<stdio.h>

int main(){
    int size;
    printf("size ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        if (i%2!=0)
        {   int odd = 1;                    // odd reset
            for (int j = 1; j <= i; j++)    // odd loop
            {
            printf("%d", odd);
            odd = odd + 2;
            }
        }else
        {   int even = 2;
            for (int j = 1; j <= i; j++)
            {
                printf("%d", even);
                even = even + 2;
            }
            
        }
        
        printf("\n");
    }
    
    return 0;
}