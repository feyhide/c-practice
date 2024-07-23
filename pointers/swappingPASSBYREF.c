#include<stdio.h>

void swap(int* x, int* y){ // TWO VARIABLE FOR STORING ADDRESS OF A AND B
    int temp = *x;  // TEMP VARIABLE MEIN X KE ANDER JO ADDRESS HAI USKI VALUE
    *x = *y;    // X KE ANDER JO ADDRESS HAI USKI VALUE KO Y KE ANDER JO ADDRESS HAI USKI VALUE BANA DO
    *y = temp;  // Y KE ANDER JO ADDRESS HAI USKI VALUE KO TEMP MEIN JO HAI WO BANA DO
}

int main(){
    int a = 5 , b = 6;
    swap(&a,&b);    // address send kiya PASS BY REF
    printf("%d %d", a ,b);
    return 0;
}