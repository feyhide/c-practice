#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    typedef struct cricket 
    {
        char name[29];
        int age,matchesplayed;
        float avgrun;
    }cricket;

    cricket cricketer[3];

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("\nEnter Name of the Cricketer: ");
        scanf("%s",string);
        strcpy(cricketer[i].name,string);
        
        printf("\nEnter Age of the Cricketer: ");
        scanf("%d",&cricketer[i].age);
        
        printf("\nEnter Matches Played of the Cricketer: ");
        scanf("%d",&cricketer[i].matchesplayed);
        
        printf("\nEnter avg run of the Cricketer: ");
        scanf("%f",&cricketer[i].avgrun);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("NAME: %s\nAGE: %d\nMATCHES PLAYED: %d\nAVG RUN: %.2f\n",cricketer[i].name,cricketer[i].age,cricketer[i].matchesplayed,cricketer[i].avgrun);
        printf("\n");
    }
    
    return 0;
}