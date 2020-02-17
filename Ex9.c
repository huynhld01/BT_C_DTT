#include <stdio.h>
#include <math.h>
#define Pi 3.14
int main(){
    double angle;

    printf("Nhap so do x (min): ");
    scanf("%lf", &angle);
    
    angle /= 60;
    printf("x thuoc goc vuong thu %d\n", (int)ceil(angle/90)%4);
    printf("cos(x) = %g\n", cos(angle*Pi/180));
    return 0;
}