#include<stdio.h>
#include<string.h>

void checkpalindrome(char str[],int start,int end){
    if(start>end){
        printf("PALINDROME");
        return;
    }
    if(str[start]!=str[end]){
        printf("NOT A PALINDROME");
        return;
    }
    start++;end--;
    checkpalindrome(str,start,end);
}
int main(){
    char str[]="MAHAMA";
    int l = strlen(str);
    checkpalindrome(str,0,--l);
    return 0;
}
