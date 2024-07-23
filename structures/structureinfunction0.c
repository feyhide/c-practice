#include<stdio.h>
typedef struct student
{
    int mark;
}student;
student s1,s2;
void check(student s1,student s2){
    if (s1.mark==s2.mark)
    {
        printf("equal");
        printf("%d %d",s1.mark,s2.mark);
    }
    
}
     
int main(){
        s1.mark = 199;
    s2.mark = 29;
    check(s1,s2);
    return 0;
}