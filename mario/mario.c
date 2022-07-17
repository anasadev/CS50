#include <stdio.h>
#include <cs50.h>

void brick(void);


int main(void)
{
    int height = 5;

    for (int counter = 0; counter < height; counter++)//quantidade de linhas
    {
        for (int j = 0; j < counter+1; j++)//quantidade de # em cada linha
        {
            brick();

        }
        printf("\n");
    }
}

void brick(void){
    printf("#");
}