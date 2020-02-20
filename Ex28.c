#include <stdio.h>
#include <math.h>

int main(){
    double x;
    long round;
    unsigned n;

    printf("Nhap so thuc x: \n");
    scanf("%lf", &x);
    printf("Do chinh xac:\n");
    scanf("%u", &n);

    /*Lam tron*/
    x *= pow(10,n);
    /*Chuyen kieu tu dong thanh long type*/
    if (x>0) round = (long)(x+0.5);
    else round = (long)(x-0.5);
    /*x = x/10^n, nguoc voi dich chuyen luc dau*/
    x = round / pow(10, n);
    printf("%.*lf\n", n>0? n:0, x);
    return 0;
    
}