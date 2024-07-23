#include<stdio.h>
#include<string.h>

int main(){
    typedef struct student 
    {
        char name[29],grade[2];
        int highestMarks,attendence;
    }student;

    student students[4];

    strcpy(students[0].name,"Fahad");
    strcpy(students[0].grade,"A");
    students[0].highestMarks = 199;
    students[0].attendence = 100;
    
    strcpy(students[1].name,"Hassan");
    strcpy(students[1].grade,"B");
    students[1].highestMarks = 9;
    students[1].attendence = 90;
    
    strcpy(students[2].name,"Ayaan");
    strcpy(students[2].grade,"A+");
    students[2].highestMarks = 99;
    students[2].attendence = 30;
    
    for (int i = 0; i < 3; i++)
    {
        printf("NAME: %s\nGRADE: %s\nHIGH MARK: %d\nATTENDENCE: %d\n",students[i].name,students[i].grade,students[i].highestMarks,students[i].attendence);
        printf("\n");
    }
    
    return 0;
}