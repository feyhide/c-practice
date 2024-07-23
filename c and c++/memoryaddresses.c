#include <stdio.h>

int main(){
    char name ='a';
    double gpa = 3.22;
    int age = 29;

    printf("name: %p\nage: %p\ngpa: %p", &name, &age, &gpa);
    return 0;
}
