#include<stdio.h>

int maze(int currentr,int currentc,int endingr,int endingc){
    int rightWays = 0;
    int downWays = 0;
    if(currentc==endingc && currentr==endingr) return 1;
    if(currentc==endingc){
        downWays += maze(currentr+1,currentc,endingr,endingc); 
    }else if(currentr==endingr){
        rightWays += maze(currentr,currentc+1,endingr,endingc);         
    }else if(currentr<endingr&&currentc<endingc){
        downWays += maze(currentr+1,currentc,endingr,endingc); 
        rightWays += maze(currentr,currentc+1,endingr,endingc);         
    }
    int totalways = rightWays + downWays;
    return totalways;
}
int main(){
    int r,c;
    printf("enter no of rows and columns");
    scanf("%d %d",&r,&c);
    int ans = maze(1,1,r,c);
    printf("%d",ans);
    return 0;
}