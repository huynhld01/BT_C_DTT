#include <stdio.h>

int main(){
    int a[100][100], c[100][100];
    int n, i, j;

    printf("Nhap n:\n");
    scanf("%d", &n);

    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            scanf("%d", &a[i][j]);
    
    printf("Ma tran ban dau:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", a[i][j]);
    
    printf("Ma tran luc sau:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", c[i][j] = a[n-1-j][i]);
    return 0;
}