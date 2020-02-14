#include <stdio.h>
#include <math.h>

int main(){
    float R, xC, yC, xM, yM;
    float d;

    printf("C(xC;yC): \n");
    scanf("%f%f", &xC, &yC);
    printf("M(xM;yM): \n");
    scanf("%f%f", &xM, &yM);
    printf("R \n");
    scanf("%f", &R);
    d = sqrt((xM-xC)*(xM-xC) + (yM-yC)*(yM-yC));

    if (R > d) 
        printf("M in C\n");
    else if (R < d)
        printf("M out C\n");
    else 
        printf("M == C\n");
    return 0;

}