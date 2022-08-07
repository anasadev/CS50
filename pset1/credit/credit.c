#include <stdio.h>
#include <cs50.h>

long long card, i, j;
int sum1, sum2, checksum;

int main(void)
{
    do
    {
    card = get_long_long("Credit card number: ");
    }
    while (card < 0);

    //it uses the luhn algorithm to check the credit card number
    //on each loop it adds the last digit (i % 10) to the sum1 and for the next loop it removes the last two digits (i/=100) as we are using integers, what is after the coma, so the rest is not considered
    for (i = card; i > 0; i /= 100)
    {
        sum1 += i % 10;
    }

    //on each loop it multiplies the last digit by two and adds to the sum2 (if result of multiplicaton has more than one digit, it adds digit by digit) and for the next loop it removes the last two digits
    for (j = card / 10; j > 0; j /= 100)
    {
        if ((j % 10) * 2 > 9)
        {
            sum2 += ((j % 10) * 2) / 10;
            sum2 += ((j % 10) * 2) % 10;
        }
        else
        sum2 += (j % 10) * 2;
    }

    checksum = sum1 + sum2;

    if (checksum % 10 == 0)
    {
        if (card > 5100000000000000 && card < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((card >=4000000000000 && card < 5000000000000) || (card >=4000000000000000 && card < 5000000000000000))
        {
            printf("VISA\n");
        }
        else if ((card >= 340000000000000 && card < 350000000000000) || (card >= 370000000000000 && card < 380000000000000))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf ("INVALID\n");
    }
    return 0;
}
