#include <stdio.h>
#include <math.h>
#define Pi 3.141593

int main(){
    double S;

    printf("Nhap S: \n");
    scanf("%lf", &S);
    printf("V = %g", (4*Pi*pow(sqrt(S / (4*Pi)), 3)) / 3);
    return 0;
}