#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 0; i <= 50; i++)
    {
        if(i%5 != 0){
            continue;
        }
        sum += i;
    }
    printf("%d", sum);
    return 0;
}