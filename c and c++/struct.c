#include <stdio.h>

    struct Family
    {
        char name[40];
        char jobstatus[40];
        int age;
    };

int main(){

    struct Family member1;
    member1.age = 22;
    strcpy( member1.name, "Basil");
    strcpy( member1.jobstatus, "Son");    

    struct Family member2;
    member2.age = 51;
    strcpy( member2.name, "Bazil");
    strcpy( member2.jobstatus, "Father");    

    struct Family member3;
    member3.age = 40;
    strcpy( member3.name, "allena");
    strcpy( member3.jobstatus, "Mother");    
        
    printf("%s", member1.jobstatus);
    return 0;   
}