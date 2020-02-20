#include <stdio.h>

int main(){
    unsigned n, s, i;

    printf("Nhap n: ");
    scanf("%lu", &n);

    for (s=0, i=n; i>0; i-=2) s+=i;
    printf("S=%u\n", s);
    return 0;
}