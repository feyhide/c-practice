#include<stdio.h>

int main(){
    int prevNum=0,PprevNum=3,question,a,c,m=101;
    char rollNum[7];
    printf("ENTER ROLL NUMBER ");
    scanf("%s",&rollNum);
    a = rollNum[4];
    c = rollNum[5];

    while (question<100)
    {   
        prevNum = (a*PprevNum+c)%m;
        printf("%d\n",prevNum);
        PprevNum = prevNum;
        question++;
    }
    




    return 0;
}