/******************************************************************************

Программа на входе получает координат точки на координатной плоскасти x, y. 
Вывести  на экран 1/2/3/4 в зависимости от того в какой четверти точка находится

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Check if the point lies on the axes or at the origin
    if (x == 0 && y == 0) {
        printf("Origin\n");
    } else if (x == 0) {
        printf("Y-axis\n");
    } else if (y == 0) {
        printf("X-axis\n");
    }
    
    else if (x > 0 && y > 0) {
        printf("1\n");
    } else if (x < 0 && y > 0) {
        printf("2\n");
    } else if (x < 0 && y < 0) {
        printf("3\n");
    } else if (x > 0 && y < 0) {
        printf("4\n");
    }
    
    return 0;
}