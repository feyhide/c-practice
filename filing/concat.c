#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("concat.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char string[100];
    char portion[100][100];
    char *token;
	
	fgets(string,sizeof(string),fp);
	string[strcspn(string,"\n")] = '\0';
	
    int count = 0;
	token = strtok(string, "<a>");
    printf("%s\n", token);

    int l = strlen(token);
    printf("%d",l);

    // Print portions or do further processing as needed

    fclose(fp);


    return 0;
}

