#include <stdio.h>

typedef struct student {
    int mark;
} student;

void mark(student* s1, student* s2) {
    s1->mark = 29;
    s2->mark = 29;
}

void check(student* s1, student* s2) {
    if (s1->mark == s2->mark) {
        printf("equal\n");
        printf("%d %d", s1->mark, s2->mark);
    }
}

int main() {

student s1, s2;

    mark(&s1, &s2);
    check(&s1, &s2);
    return 0;
}
