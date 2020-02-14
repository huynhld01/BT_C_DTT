#include <stdio.h>
#include <math.h>

int main(){
    float xA, xB, yA, yB;

    printf("A(xA;yA): \n");
    scanf("%f %f", &xA, &xB);
    printf("B(yA;yB): \n");
    scanf("%f %f", &yA, &yB);
    // Result
    printf("|AB| = %g", sqrt((xB-xA)*(xB-xA) + (yB-yA)*(yB-yA)));
    return 0;
}