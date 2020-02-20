#include <stdio.h>

int main(){
    unsigned long n, s, i;

    printf("Nhap n: ");
    scanf("%lu", &n);

    for (s=0, i=1; i<=n; ++i)
        s+= i*i*i;
    printf("ve trai = %lu\n", s);
    printf("Ve trai = %lu\n", n*n*(n+1)*(n+1)/4);
    return 0;
}