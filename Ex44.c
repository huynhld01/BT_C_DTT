#include <stdio.h>

int main(){
    unsigned n, i, j;

    printf("Nhap n: \n");
    scanf("%u", &n);
    for (i=1; i<=n; ++i, putchar('\n'))
        for (j=1; j<=n+i-1; ++j)
            printf((j<n-i+1) ? " ":"*");

    for (i=1; i<=n; ++i, putchar('\n'))
        for (j=1; j<=n+i-1; ++j)
            printf((j==n-i+1 || j==n+i-1 || i==n) ? "*" : " ");
    
    for (i=1; i<=2*n-1; ++i, putchar('\n'))
        for (j=1; j<=2*n-1; ++j)
            if ((j>=i && j<=2*n-i) || (j<=i && j>=2*n-i))
            printf("*");
            else printf(" ");
    return 0;

}