/******************************************************************************

На ввод подаются 3 числа, вывести количества нечетных чисел.
Все числа положительные и меньше 10^6.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    // Validation
    if (
        num_1 < 1 || num_1 >= 1000000 || 
        num_2 < 1 || num_2 >= 1000000 ||
        num_3 < 1 || num_3 >= 1000000
    ) {
        printf("Invalid input.\n");
    }
    
    int odd_num_count = 0;
    if (num_1 % 2 == 1) {
        odd_num_count++;
        // Same as 
        // odd_num_count += 1;
        // odd_num_count = odd_num_count + 1;
    }
    if (num_2 % 2 == 1) {
        odd_num_count++;
    }
    if (num_3 % 2 == 1) {
        odd_num_count++;
    }
    printf("%d", odd_num_count);

    return 0;
}