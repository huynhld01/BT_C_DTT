#include <stdio.h>

int main(){
    int a[100][100];
    int n, i, j, k, v;

    printf("Nhap n:\n");
    scanf("%d", &n);

    v=1;
    for (k=-n+1; k<n; ++k)
        for (i=0; i<n; ++i)
            for (j=0; j<n; ++j)
                if (j==n-i-1+k)
                    if (k%2) a[j][i]=v++;
                    else a[i][j] = v++;
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%5d", a[i][j]);
    return 0;
}