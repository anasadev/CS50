#include <stdio.h>
#include <cs50.h>

int final;
int years;
int pop;

int main(void)
{
    //Ask user the initial population
    do
    {
        pop = get_int("Initial population:");
    }
    while (pop < 9);

    //Ask user the final population
    do
    {
        final = get_int("Final population:");
    }

    while (final < pop);

    //Calculate how many years to reach final population
    for (years = 0; pop < final; years++)
    {
        pop = pop + pop / 3 - pop / 4;
    }

    printf("Years: %i\n", years);

}