#include "Utility.h"
#include <stdlib.h>

void shuffleArray(int *array, int size)
{
    // loop through and swap each element with a random element
    for (int i = 0; i < size - 1; i++)
    {
        int j = i + rand() / (RAND_MAX / (size - i) + 1);
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }
}

// Returns 1 if all numbers are valid, 0 otherwise
int validateHorseNumbers(int *horses, int count, int maxHorseNumber)
{
    for (int i = 0; i < count; i++)
    {
        if (horses[i] < 1 || horses[i] > maxHorseNumber)
        {
            return 0;
        }
    }
    return 1;
}
