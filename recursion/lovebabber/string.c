#include<stdio.h>
int count=0,n=0;

int str(char a[]){
    if (a[n]=='\0')
    {
        return 1;
    }
    count++;
    n++;
    return str(a);
}
int main(){
    char a[]="123456789";
    str(a);
    printf("lenght of string %d",count);
    return 0;
}
