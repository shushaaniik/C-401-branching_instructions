/******************************************************************************

Программа на входе получает целое число. Напечатать на экран YES если данное число
1)Двузначное и четное
2)Трехзначное и нечетное 
NO в противном случае.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    if (number > 9 && number < 100 && number % 2 == 0) {
    // (number % 2 == 0) == !(number % 2) 
    // as !0 == 1, !1 == 0
        printf("1. YES\n");
    } else {
        printf("1. NO\n");
    }
    if (number >= 100 && number <= 999 && number % 2 == 1) {
        printf("2. YES\n");
    }
    else {
        printf("2. NO\n");
    }

    return 0;
}