#include<stdio.h>
void fun(int arr[]){
    arr[3]=7;
    return;
}

int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[3]);    
    fun(arr);
    printf("%d",arr[3]);
    return 0;
}


// WE CAN SAY THAT ARRAYS PASSES TO FUNCTION IN FORM OF ADDRESS