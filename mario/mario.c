#include <stdio.h>
#include <cs50.h>

void brick(void);


int main(void)
{
    int height = 5;
    int counter = 0;

    for (int i = 0; i < height; i++)//quantidade de linhas
    {
        for (int j = 0; j < counter+1; j++)//quantidade de # em cada linha
        {
            brick();

        }
        printf("\n");
        counter++;
    }
}

void brick(void){
    printf("#");
}