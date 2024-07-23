#include <stdio.h>

int main(){
    int guess;
    int secretNumber = 2;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0)
    {
        if(guessCount < guessLimit)
        {
            printf("enter your number :");
            scanf("%d", &guess);
            guessCount++;
        }else
        {
            outOfGuesses = 1;
        }
    }

    if (outOfGuesses == 1)
    {
        printf("out of guesses :/");
    }else{
        printf("YOU WIN BOYYY");
    }

    return 0;
}