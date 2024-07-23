#include<stdio.h>

int mazerev(int currentr,int currentc){
    int rightWays = 0;
    int downWays = 0;
    if(currentc==1 && currentr==1) return 1;
    if(currentc==1){
        downWays += mazerev(currentr-1,currentc); 
    }else if(currentr==1){
        rightWays += mazerev(currentr,currentc-1);         
    }else if(currentr>1 && currentc>1){
        downWays += mazerev(currentr-1,currentc); 
        rightWays += mazerev(currentr,currentc-1);         
    }
    int totalways = rightWays + downWays;
    return totalways;
}
int main(){
    int r,c;
    printf("enter no of rows and columns");
    scanf("%d %d",&r,&c);
    int ans = mazerev(r,c);
    printf("%d",ans);
    return 0;
}