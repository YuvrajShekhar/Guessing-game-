# Guessing-game-
A simple number guessing game, where one has to guess the random number generated within 5 tries to win the game. 

    //code starts here
    
    #include <stdio.h>
    #include <stdlib.h>
    #include<time.h> // random number generator seed

    int main()
    {
    int randomNumber = 0 ;
    int Number_guessed = 0 ;
    int number_of_guess;
    time_t t ;

    //intializing random number
    srand((unsigned) time(&t));
    // calling the random number
    randomNumber = rand() %15;

    printf("\n welcome to the game");
    printf("\n Please guess a number between 0 to 15");

    for(number_of_guess=5;number_of_guess>0;number_of_guess--)
    {
         printf("\n you have %d tr%s left to guess the number ",number_of_guess,number_of_guess==1?"y":"ies");
         printf("\n Enter your number: \n ");
         scanf("%d",&Number_guessed);

     if(Number_guessed==randomNumber)
    {

         printf(" You guessed it right.\n Congratulations");
         goto label;
    }

    else if (Number_guessed<0 || Number_guessed>15)
        printf(" Please Enter a Number between 0 and 20 ");
    else if (Number_guessed<randomNumber)
        printf(" Entered number is lower than the number needed to be guessed");
    else
        printf(" Entered number is higher than the number needed to be guessed");
    }
    printf(" sorry you have used all your 5 tries and have lost this game");
    label:
    return 0;
    }
