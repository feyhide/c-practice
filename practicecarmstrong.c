#include<stdio.h>

int main(){
    int temp,number , reminder , result = 0;
    printf("Number of three digit:");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        reminder = number % 10;
        result += reminder*reminder*reminder;

        number /= 10;
    }
    if(result == temp){
        printf("YES ITS AN ARMSTRONG NUMBER");
    }
    else{
        printf("NOPE ITS NOT");
    }

    return 0;
}