#include<stdio.h>
void ultakardo(char str[],int i,int j){
    if(i>j) return;
    char temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    i++;
    j--;
    ultakardo(str,i,j);
}
int main(){
    char str[]="FAHAD";
    ultakardo(str,0,4);
    printf("%s",str);
    return 0;
}