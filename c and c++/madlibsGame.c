#include <stdio.h>

int main()
{   // IT HAS A PROBLEM THAT IT DOESNT SUPPORT TWO WORDS NAME
//    char color[20];
//    char noun[20];
//    char name[20];

//    printf("Your Color : ");
//    scanf("%s", color);
//    printf("Your Noun : ");
//    scanf("%s", noun);
//    printf("Your name : ");
//    scanf("%s", name);

//    printf("Roses are %s\n", color);
//    printf("%s are blue\n", noun);
//    printf("I love %s", name);
    
//    return 0;

    // TO ACCEPTS TWO WORDS NAME    
    char color[20];
    char noun[20];
    char name1[20];
    char name2[20];

    printf("Your Color : ");
    scanf("%s", color);
    printf("Your Noun : ");
    scanf("%s", noun);
    printf("Your name : ");
    scanf("%s%s", name1,name2);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s %s", name1,name2);
    
    return 0;

}