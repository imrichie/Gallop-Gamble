#include <stdio.h>
#include "Race.h"
#include "Bet.h"
#include "Utility.h"

int main()
{
    int userBalance = 200;
    int exitProgram = 0;

    while (!exitProgram)
    {
        printf("Welcome to Gallop Gamble!\n");
        printf("Please select from the following options:\n");
        printf("1. Place an exacta bet\n");
        printf("2. Place an exactabox bet\n");
        printf("3. Place a trifecta bet\n");
        printf("4. Place a trifectabox bet\n");
        printf("5. See your USD balance\n");
        printf("6. Exit\n");
        printf(">>> ");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            processBet(choice, &userBalance);
            break;
        case 5:
            printf("Current Balance: $%d\n\n", userBalance);
            break;
        case 6:
            exitProgram = 1;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    printf("Thank you for playing!\n\n");
    return 0;
}
