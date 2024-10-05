/******************************************************************************

Программа на входе получает целое число. Напечатать на экран YES если данное число
1)Двузначное и четное
2)Трехзначное и нечетное 
NO в противном случае.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int input_1, input_2, input_3;
    scanf("%d %d %d", &input_1, &input_2, &input_3);
    
    if (input_1 > 0 && input_2 > 0 && input_3 > 0) {
        printf("Condition а is not correct.");
    }
    
    if (input_1 > 0 || input_2 > 0 || input_3 > 0) {
        printf("Condition б is not correct.");
    }

    if (
        (input_1 > 0 && input_2 < 0 && input_3 < 0) ||
        (input_1 < 0 && input_2 > 0 && input_3 < 0) ||
        (input_1 < 0 && input_2 < 0 && input_3 > 0)
    ) {
        printf("Condition в is not correct.");
    }
    
    // ровно два из них положительны - то же самое что
    // ровно один из них отрицателен
    if (
        (input_1 < 0 && input_2 > 0 && input_3 > 0) ||
        (input_1 > 0 && input_2 < 0 && input_3 > 0) ||
        (input_1 > 0 && input_2 > 0 && input_3 < 0)
    ) {
        printf("Condition г is not correct.");
    }
    
    if(
        (input_1 == input_2) ||
        (input_2 == input_3) ||
        (input_1 == input_3)
    ) {
        printf("Condition д is not correct.");
    }

    return 0;
}
