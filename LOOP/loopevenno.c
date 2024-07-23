#include<stdio.h>

int main(){
    int n;
    printf("N:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /*if(i%2!=0){
            continue;
        }
        printf("%d ", i);*/

        if( i%2 == 0){
            printf("%d  ", i);
        }
    }
    
    return 0;
}