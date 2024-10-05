/******************************************************************************

Напишите программу, которая получает символ (char) на входе и выводит,
является ли он строчной (малой буквой) или заглавной (большой буквой).

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letter;
    scanf("%c", &letter);
    
    
    // Note: In C, we use single quotes (') for character literals and
    // double quotes (") for string literals. So 'a' is not same as "a".
    
    if (letter >= 'a' && letter <= 'z') {
        printf("Lowercase\n");
    }
    else if (letter >= 'A' && letter <= 'Z') {
        printf("Uppercase\n");
    }
    
    // Validation
    else {
        printf("Invalid input.\n");
    }

    return 0;
}