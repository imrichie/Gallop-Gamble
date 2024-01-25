#include "Bet.h"
#include "Race.h"
#include <stdio.h>

// process Exacta Bet
void processExactaBet(int *userBalance, const int *raceResults, int horse1, int horse2)
{
    const int cost = 15;
    const int winAmount = 150;

    // subtract the cost of the bet
    *userBalance -= cost;

    // indicate that we are processing the bet
    printf("Processing exacta bet for horse %d and horse %d...\n", horse1, horse2);

    // race results
    printf("Race Results: %d %d %d %d\n", raceResults[0], raceResults[1], raceResults[2], raceResults[3]);

    // if the first raceresult is horse1 and the second raceresult is horse2
    if (raceResults[0] == horse1 && raceResults[1] == horse2)
    {
        // credit the user with the win amount
        *userBalance += winAmount;
        printf("You won $%d!\n", winAmount);
    }
    else
    {
        printf("You lost!\n");
    }

    // print current balance
    printf("\nCurrent Balance: $%d\n\n", *userBalance);
}

// process Exacta Box Bet
void processExactaBoxBet(int *userBalance, const int *raceResults, int horse1, int horse2)
{
    const int cost = 10;
    const int winAmount = 100;

    *userBalance -= cost;

    // indicate that we are processing the bet
    printf("Processing exacta box bet for horse %d and horse %d...\n", horse1, horse2);

    // race results
    printf("Race Results: %d %d %d %d\n", raceResults[0], raceResults[1], raceResults[2], raceResults[3]);

    if ((raceResults[0] == horse1 && raceResults[1] == horse2) || (raceResults[0] == horse2 && raceResults[1] == horse1))
    {
        *userBalance += winAmount;
        printf("You won $%d!\n", winAmount);
    }
    else
    {
        printf("You lost!\n");
    }

    // print current balance
    printf("\nCurrent Balance: $%d\n\n", *userBalance);
}

// process Trifecta Bet
void processTrifectaBet(int *userBalance, const int *raceResults, int horse1, int horse2, int horse3)
{
    const int cost = 20;
    const int winAmount = 250;

    *userBalance -= cost;

    // indicate that we are processing the bet
    printf("Processing trifecta bet for horse %d, horse %d, and horse %d...\n", horse1, horse2, horse3);

    // indicate race results
    printf("Race Results: %d %d %d %d\n", raceResults[0], raceResults[1], raceResults[2], raceResults[3]);

    if (raceResults[0] == horse1 && raceResults[1] == horse2 && raceResults[2] == horse3)
    {
        *userBalance += winAmount;
        printf("You won $%d!\n", winAmount);
    }
    else
    {
        printf("You lost!\n");
    }

    // print current balance
    printf("\nCurrent Balance: $%d\n\n", *userBalance);
}

// process Trifecta Box Bet
void processTrifectaBoxBet(int *userBalance, const int *raceResults, int horse1, int horse2, int horse3)
{
    const int cost = 18;
    const int winAmount = 180;

    *userBalance -= cost;

    // indicate that we are processing the bet
    printf("Processing trifecta box bet for horse %d, horse %d, and horse %d...\n", horse1, horse2, horse3);

    // indicate race results
    printf("Race Results: %d %d %d %d\n", raceResults[0], raceResults[1], raceResults[2], raceResults[3]);

    if ((raceResults[0] == horse1 || raceResults[0] == horse2 || raceResults[0] == horse3) &&
        (raceResults[1] == horse1 || raceResults[1] == horse2 || raceResults[1] == horse3) &&
        (raceResults[2] == horse1 || raceResults[2] == horse2 || raceResults[2] == horse3))
    {
        *userBalance += winAmount;
        printf("You won $%d!\n", winAmount);
    }
    else
    {
        printf("You lost!\n");
    }

    // print current balance
    printf("\nCurrent Balance: $%d\n\n", *userBalance);
}

// process the bet
void processBet(int betType, int *userBalance)
{
    int horse1;
    int horse2;
    int horse3;
    int raceResults[4];

    printf("Enter your horse picks (separated by spaces): ");

    // check if exacta or trifecta
    if (betType == 1 || betType == 2)
    {
        scanf("%d %d", &horse1, &horse2);
    }
    else
    {
        scanf("%d %d %d", &horse1, &horse2, &horse3);
    }

    // run the race
    ReadySetGo(raceResults);

    // call specific bet
    switch (betType)
    {
    case 1:
        processExactaBet(userBalance, raceResults, horse1, horse2);
        break;
    case 2:
        processExactaBoxBet(userBalance, raceResults, horse1, horse2);
        break;
    case 3:
        processTrifectaBet(userBalance, raceResults, horse1, horse2, horse3);
        break;
    case 4:
        processTrifectaBoxBet(userBalance, raceResults, horse1, horse2, horse3);
        break;
    }
}
