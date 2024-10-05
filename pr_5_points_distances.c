/******************************************************************************

На числовой оси даны три точки A, B, C.
Выяснять какая из точек B и C находится ближе к точке A и
напечатать на экране координату  этой точки и расстояние от точки A

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int dist_A_B = abs(A - B);
    int dist_A_C = abs(A - C);
    
    if (dist_A_B < dist_A_C) {
        printf("B, distance = %d", dist_A_B);
    }
    else if (dist_A_B > dist_A_C) {
        printf("C, distance = %d", dist_A_C);
    }
    else {
        printf("Same, distance = %d", dist_A_C);
    }
    
    return 0;
}