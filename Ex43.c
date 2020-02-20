#include <stdio.h>

int main(){
    unsigned n, i, f0, f1, f2;

    printf("Nhap n(n<40):");
    scanf("%ld", &n);

    f1=f1=f2=1;
    for (i=3; i<=n; ++i){
        f2=f1+f0;
        f0=f1;
        f1=f2;
    }
    printf("Fi(%u) = %u\n", n, f0);
    return 0;
}