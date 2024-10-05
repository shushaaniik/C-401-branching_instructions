/******************************************************************************

На входе мы получаем целые числа input_1, input_2 и input_3. Произносите "Condition is correct.", если:
а) все три положительны,
б) хотя бы один из них положителен,
в) ровно один из них положителен,
г) ровно два из них положительны,
д) хотя бы два из них равны,
В противном случае "No condition is correct.".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int input_1, input_2, input_3;
    scanf("%d %d %d", &input_1, &input_2, &input_3);
    
    if (input_1 > 0 && input_2 > 0 && input_3 > 0) {
        printf("Condition а is correct.\n");
    } else {
        printf("Condition а is not correct.\n");
    }
    
    if (input_1 > 0 || input_2 > 0 || input_3 > 0) {
        printf("Condition б is correct.\n");
    } else {
        printf("Condition б is not correct.\n");
    }

    if (
        (input_1 > 0 && input_2 < 0 && input_3 < 0) ||
        (input_1 < 0 && input_2 > 0 && input_3 < 0) ||
        (input_1 < 0 && input_2 < 0 && input_3 > 0)
    ) {
        printf("Condition в is correct.\n");
    } else {
        printf("Condition в is not correct.\n");
    }
    
    // ровно два из них положительны - то же самое что
    // ровно один из них отрицателен
    if (
        (input_1 < 0 && input_2 > 0 && input_3 > 0) ||
        (input_1 > 0 && input_2 < 0 && input_3 > 0) ||
        (input_1 > 0 && input_2 > 0 && input_3 < 0)
    ) {
        printf("Condition г is correct.\n");
    } else {
        printf("Condition г is not correct.\n");
    }
    
    if(
        (input_1 == input_2) ||
        (input_2 == input_3) ||
        (input_1 == input_3)
    ) {
        printf("Condition д is correct.\n");
    } else {
        printf("Condition д is not correct.\n");
    }
    
    return 0;
}