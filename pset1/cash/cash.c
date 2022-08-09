#include <stdio.h>
#include <cs50.h>
#include <math.h>

float get_positive_float(void);

int main(void)
{

    int coins = 0;

    //Ask user the number of cents that a customer is owed
    float userChange = get_positive_float();

    //Multiply by 100 to calculate with integers
    int change = round(userChange * 100);

    //Calculate how many coins that a customer is owed
    while (change > 0)
    {
        while (change >= 25)
        {
            {
                change = change - 25;
                coins++;
            }
        }
        while (change < 25 && change >= 10)
        {
            change = change - 10;
            coins++;
        }
        while (change < 10 && change >= 5)
        {
            change = change - 5;
            coins++;
        }
        while (change < 5 && change >= 1)
        {
            change = change - 1;
            coins++;
        }
    }

    printf("%i\n", coins);
}

float get_positive_float(void)
{
    float n;
    do
    {
        n = get_float("Amount of change: ");
    }
    while (n <= 0);
    return n;
}