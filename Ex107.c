#include <stdio.h>
#define MAX 100
int main(){
    int a[100][100];
    int n, i, j, v;

    do {
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<1 || n>MAX);

    v=1;
    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            if (i%2) a[i][n-j-1] = v++;
            else a[i][j] = v++;

    printf("Ma tran Z:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j){
            printf("%5d", a[i][j]);
        }
    return 0;
}