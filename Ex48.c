#include <stdio.h>

int main(){
    unsigned i, n, temp;

    printf("Nhap n: \n");
    scanf("%u", &n);

    for (i=n/2; i>=1; --i)
        if (n%i==0 && i&1) break;
        printf("US le lon nhat : %u\n", i);

    for (temp = i = 1; i<=n/2; i*=2)
        if (n%i==0) temp = i;
        printf("US lon nhat la luy thua cua 2: %u\n"), temp);
    return 0;
}