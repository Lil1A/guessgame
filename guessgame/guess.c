#include "guess.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void guess (int N)
{

    int number, guess, numberofguess = 0;

    srand(time(0));
    number = rand() %N;

    printf("Gondolj egy szamra 1 es %d\n kozott", N);
           



    do {
        if (numberofguess > 9) {
            printf("Vesztettel!\n");
            break;
        }
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("kisebb szam!\n");
            numberofguess++;
        }
        else if (number > guess)
        {
            printf("Nagyobb szam!\n");
            numberofguess++;
        }
        else
        {

            printf(" eltalaltad a szamot %d probalkozasra!\n",
                   numberofguess);
        }

    } while (guess != number);
}
