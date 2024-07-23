#include<stdio.h>
#include<string.h>

int main(){
    typedef struct date
    {
        int day,month,year;
    }date;

    // or struct pokemon sheeshee; to declare
    date arr1;
    date arr2;
    arr1.day = 2;
    arr2.day = 2;
    
    arr1.month = 12;
    arr2.month = 12;

    arr1.year = 2001;
    arr2.year = 2001;

    if(arr1.day==arr2.day&&arr1.month==arr2.month&&arr1.year==arr2.year){
        printf("equal");
    }else{
        
        printf("not equal");
    }
    return 0;
}