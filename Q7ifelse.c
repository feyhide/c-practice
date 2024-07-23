#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("Marks:");
    scanf("%d",&marks);

    if (marks<30){
        printf("c");
    }
    else if(marks>= 30 && marks<70){
        printf("b");
    }
    else if(marks>= 70 && marks<90){
        printf("a");
    }
    else if(marks >= 90 && marks<100){
        printf("a+");
    }
    else{
        printf("Wrong input");
    }
    return 0;
}