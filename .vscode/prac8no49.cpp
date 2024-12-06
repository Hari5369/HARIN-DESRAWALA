#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    // toggle each string characters
    for (i = 0; str[i] != NULL; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32; //convert into lower case
        else if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32; //convert into upper case
    }

    printf("String after toggle each characters: %s", str);
 
    return 0;
}
