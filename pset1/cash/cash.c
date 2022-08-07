#include <stdio.h>
#include <cs50.h>
#include <math.h>

float get_positive_float(void);

int main(void){

    int coins = 0;

    float userChange = get_positive_float();

    int change = round(userChange * 100);

    int penny = 1;
    int nickel = 5;
    int dime = 10;
    int quarter = 25;

    while (change > 0){
        while(change >= 25){
            {
                change = change - 25;
                coins++;
            }
        }
        while (change < 25 && change >= 10){
            change = change - 10;
            coins++;
        }
        while (change < 10 && change >= 5){
            change = change - 5;
            coins++;
        }
        while (change < 5 && change >= 1){
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
    while(n <= 0);
    return n;
}