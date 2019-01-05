#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>


char nonRepeatChar(char *);

int main(void)
{
   char *text = "aabbccddd";
   char result = nonRepeatChar(text);

   printf("result: %c\n", result);

    return 0;
}

char nonRepeatChar(char *text)
{
    // Length of text being
    // passed to function
    int length = strlen(text);

    // To keep track of the chars
    // that are repeated
     int repeated = 0;


    // First for loop to cycle through the text
    for (int i = 0; i < length; i++)
    {
        // For every letter, set repeated to 0
         repeated = 0;

        // Second for loop comparing chars
        for (int j = 0; j < length; j++)
        {
            // If the j and i index of text match,
            // and i is not equal to j
            if (text[i] == text[j] && i != j)
            {
                // If a letter is found multiple
                // times, increment repeated
                repeated++;
                break;
            }

         }

        // The first non repeated char has
        // been found, return it
         if (repeated == 0)
           return text[i];

    }

    // If all chars are repeated,
    // return an underscore
    return '_';

}