#include <stdio.h>
#define MAX 100

int main(){
    int a[MAX][MAX], b[MAX][MAX];
    int n, i, j;

    do {
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<1 || n>MAX);

    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            scanf("%d", &a[i][j]);
    
    printf("Ma tran chuyen vi:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%5d", b[i][j] = a[j][i]);
    return 0;

}