/******************************************************************************

В переменной month лежит какое-то число из интервала от 1 до 12.
Определите в какую пору года попадает этот месяц (зима, лето, весна, осень).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);
    
    // Validation
    if (month < 1 || month > 12) {
        printf("Invalid input");
    }
    else {
        if (month == 12 || month == 1 || month == 2) {
            printf("Winter.\n");
        } else if (month >= 3 && month <= 5) {
            printf("Spring.\n");
        } else if (month >= 6 && month <= 8) {
            printf("Summer.\n");
        } else if (month >= 9 && month <= 11) {
            printf("Autumn.\n");
    }

    return 0;
}