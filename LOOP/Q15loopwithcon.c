#include<stdio.h>
int main(){

    for (int i = 0; i <= 50; i++)
    {
        if(i%5 != 0){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}