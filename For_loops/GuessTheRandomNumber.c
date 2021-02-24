#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int guessNumber, chanceLeft;

    // Random No. Generator
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;
    printf("%d\n", randomNumber);

    printf("This Is A Guessing Game.\nI Have Chosen A No. Between 0 And 20 Which You Must Guess.\n\n\n");

    for (chanceLeft = 5; chanceLeft >= 1; --chanceLeft)
    {
        printf("\nYou Have %d Chance Left\n", chanceLeft);

        printf("\nEnter You're Guess : ");
        scanf("%d", &guessNumber);

        if (guessNumber == randomNumber)
        {
            printf("\n\n***************\n   Congrats\n   You Won\n***************\n\nYour Guess %d Is Right.\n\n\n", guessNumber);
            break;
        }
        else if (guessNumber > 20 || guessNumber < 0)
        {
            printf("\n***************\nInvalid Guess\nTry No's Between 0 To 20\n***************\n");
            ++chanceLeft;
        }

        // Algorithm For Low, High, Too High, Too Low
        else
        {
            if (randomNumber - guessNumber >= 5)
                printf("\nGuess Is Very Low");
            else if (randomNumber - guessNumber > 0 && randomNumber - guessNumber < 5)
                printf("\nGuess Is Low");
            else if (guessNumber - randomNumber > 0 && guessNumber - randomNumber < 5)
                printf("\nGuess Is High");
            else if (guessNumber - randomNumber >= 5)
                printf("\nGuess Is Too High");
        }
    }

    if (randomNumber != guessNumber)
    {
        printf("\n\n\nYou Have Tried 5 Times And Failed, Good Luck Next Time\n\n\n");
    }
    
}