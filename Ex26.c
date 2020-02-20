#include <stdio.h>
#include <math.h>

int main(){
    int num, denom;
    int tnum, tdenom;

    printf("Nhap TS, MS:\n");
    scanf("%d%d", &num, &denom);

    tnum = abs(num);
    tdenom = abs(denom);

    while (tnum != tdenom)
        (tnum > tdenom) ? (tnum -= tdenom) : (tdenom -= tnum);
        num /= tnum;
        denom /= tnum;
    printf("Rut gon:\n");
    if (denom < 0){
        num = -num;
        denom = -denom;
    }
    if (denom == 1) printf("%d\n", num);
    else printf("%d/%d\n", num, denom);
    return 0;
}