#include "Race.h"
#include "Utility.h"
#include <stdlib.h>
#include <time.h>

void ReadySetGo(int *results)
{
    // loop through the array and assign each element a value
    for (int i = 0; i < 4; i++)
    {
        results[i] = i + 1;
    }

    // Shuffle the array
    shuffleArray(results, 4);
}
