#include<stdio.h>

int main(){
    typedef struct school
    {
        int rollNo;
        int marks;
    } fast;

    fast fahad;
    fahad.rollNo = 1111;
    fahad.marks = 10101;
    printf("%d\n",fahad.marks);   
    printf("%d\n",fahad.rollNo );   

    return 0;
}