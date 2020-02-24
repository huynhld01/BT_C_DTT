#include <stdio.h>

int main(){
    int a[4][4];
    int *b = &a[0][0]; // mang 2 chieu a tuong duong mang 1 chieu b
    int i, j, t;
    int n=4;

    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j){
            scanf("%d", &a[i][j]);
        }
    
    printf("Mang goc:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", a[i][j]);
    
    /*Sap xep mang*/
    for (i=0; i<n*n-1;++i)
        for (j=i+1; j<n*n; ++j)
            if (b[i] > b[j]){
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
     printf("Mang da sap xep:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", a[i][j]);
    return 0;
}   