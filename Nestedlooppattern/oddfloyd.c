#include<stdio.h>

int main(){

    int n;
    printf("size ");
    scanf("%d", &n);
    
    int a = 1; // reset nhi horha thats why hum aage hi barh rahe agar repeat karwana hota shuru se so we have to put it
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {   //here
            printf("%d ", a);
            a += 2;  //odd
        }
        printf("\n");
    }
    
    return 0;
}