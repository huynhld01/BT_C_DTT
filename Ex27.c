#include <stdio.h>

int main (){
    unsigned n;
    unsigned i=2;

    printf("Nhap n:\n");
    scanf("%u", &n);
    while (n>1){
        while (n%i)
            ++i;
            n /= i;
            printf(n>1 ? "%u * " : "%u\n", i);
    }
    return 0;
}