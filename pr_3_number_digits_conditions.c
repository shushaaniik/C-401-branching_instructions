/******************************************************************************

Программа на входе получает целое трехзначное число. Напечатать на экран YES если
1)Все разряды данного числа равны
2)Разряды данного числа являются возрастающей последовательностью
3)Данное число симметричное
NO в противном случае.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    // Validation
    if (!(number > 99 && number < 1000)) {
        printf("Invalid input.\n");
    }
    
    else {
    
        int ones = number % 10;
        int tens = (number / 10) % 10;
        int hundreds = number / 100;
        
        // E.g. 591
        // ones = 591 % 10 = 1
        // tens = (591 / 10) % 10 = 9
        // hundreds = 591 / 100 = 5
        
        if (ones == tens == hundreds) {
            printf("1. YES\n");
        } else {
            printf("1. No\n");
            
        }
        if (hundreds < tens && tens < ones) {
            printf("2. YES\n");
        } else {
            printf("2. No\n");
            
        }
        
        if (ones == hundreds) {
            printf("3. YES\n");
        } else {
            printf("3. No\n");
            
        }
    }
    
    return 0;
}