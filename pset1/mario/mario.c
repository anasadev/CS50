#include <stdio.h>
#include <cs50.h>

void brick(void);
void espace(void);
int get_positive_int(void);


int main(void)
{
    //Ask user the pyramid height (number between 1 and 8)
    int height = get_positive_int();

    //number of rows
    for (int counter = 0; counter < height; counter++)
    {
        for (int i = 0; i < height - counter - 1; i++)
        {
            espace();
        }
        //number of bricks in each row
        for (int j = 0; j < counter+1; j++)
        {
            brick();

        }
        printf("  ");

        for (int k = 0; k <  counter + 1; k++)
            {
                brick();
            }
        printf("\n");
    }

}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Choose a number from 1 to 8 to be the height of your pyramid\n");
    }
    while(n < 1 || n > 8);
    return n;
}


void brick(void){
    printf("#");
}

void espace(void){
    printf(" ");
}