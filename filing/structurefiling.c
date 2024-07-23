#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char name[23];
    int age;
    char sex[10];
} student;

void inputarray(student std[], int s, int e) {
    scanf("%s %d %s", std[s].name, &std[s].age, std[s].sex);
}

void printarray(student std[], int s, int e, FILE *fp) {
    fprintf(fp, "%s %d %s\n", std[s].name, std[s].age, std[s].sex);
}

void readarray(student std[], int s, int e, FILE *fp) {
    fscanf(fp, "%s %d %s", std[s].name, &std[s].age, std[s].sex);
}

int main() {
    FILE* fp = fopen("structurefiling.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    student std[3], stdread[3];

    printf("ENTER STUDENT DETAILS:\nNAME  AGE  SEX\n");
    for (int i = 0; i < 3; i++) {
        inputarray(std, i, 3);
    }
    
    for (int i = 0; i < 3; i++) {
        printarray(std, i, 3, fp);
    }

    fclose(fp);

    // Reopen the file for reading
    fp = fopen("structurefiling.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    for (int i = 0; i < 3; i++) {
        readarray(stdread, i, 3, fp);
    }
	
	printf("\n");
	for (int i = 0; i < 3; i++) {
        printf("%s %d %s\n", stdread[i].name, stdread[i].age, stdread[i].sex);
    }
    fclose(fp);

    return 0;
}

