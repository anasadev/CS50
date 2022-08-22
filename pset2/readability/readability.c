#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(void)
{
    //Prompt user
    string text = get_string("Enter a text: \n");

    int length = strlen(text);
    int letters = 0;
    //Words dont start from zero cause last word dont have any space after and it's what we are using to count each word
    int words = 1;
    int sentences = 0;

    //Loop for counting letters, words and sentences
    for (int i = 0; i < length ; i++)
    {

        if (isalpha(text[i]) != 0)
        {
            letters += 1;
        }

        if (text[i] == ' ')
        {
            words += 1;
        }

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences += 1;
        }
    }

    //L = average number of letters per 100 words
    float L = ((float)letters / (float)words) * 100;
    //s = average number of sentences per 100 words
    float s = ((float)sentences / (float)words) * 100;
    //Coleman-liau readability index
    float floatIndex = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(floatIndex);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}