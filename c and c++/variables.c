#include <stdio.h>

int main ()
{
    printf("there once was a man named john \n");
    printf("he was 30 years old. \n");
    
    // for character variable is char and for number specially integers is int
    // the [] use for storing variables
    // %s is use for telling the program that another string is use by specifing it after a comma
    // %d is use for numbers 
    char characterName[] = "john";
    int characterAge = 30;

    printf("there once was a man named %s %d \n", characterName, characterAge);
    printf("he was %d years old. \n", characterAge);

    // const is use before any variable if we dont want it to be change

    const int no = 22;
    printf("%d", no);
    return 0;
}