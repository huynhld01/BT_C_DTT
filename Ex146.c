#include <stdio.h>

int coef (int n, int k){
    if (k==0 || k==n) return 1;
    return coef(n-1, k-1) + coef(n-1, k);
}

void tpascal(int n){
    int i, j;
    for (i=0; i<=n; ++i){
        printf("%*c", (n-i+1)*2, ' ');
        for (j=0; j<=i; ++j)
            printf("%2d%2c", coef(i,j), ' ');
        putchar('\n');
    }
}

int main(){
    int n;

    printf("Nhap n:");
    scanf("%d", &n);
    tpascal(n);
    return 0;
}