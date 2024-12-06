#include <stdio.h>


int main()
{
    char str[100];
    int i, words;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 1;

    /* Runs a loop till end of string */
    while(str[i] != '\0')
    {
        /* If the current character(str[i]) is white space */
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}
