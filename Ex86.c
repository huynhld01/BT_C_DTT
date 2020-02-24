#include <stdio.h>
#include <stdlib.h>

#define MAX 20
#define swap(a,b) {int t=a; a=b; b=t;}

int main(){
    int a[MAX][MAX], b[MAX];
    int n, i, j, k;
    do {
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<1 || n>MAX);

    printf("Nhap mang:\n");
    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            scanf("%d", &a[i][j]);
    
    printf("Mang:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", a[i][j]);

    /*Tinh tong cac cot*/
    for (i=0; i<n; ++i){
        int t;
        for (j=0; j<n; ++j)
          {  t+=a[i][j];}
        b[i] = t;
    }

    /*Sap xep mang b[i]*/
    for (i=0; i<n-1; ++i)
        for (j=i+1; j<n; ++j)
            if (b[i]>b[j]) {
                swap(b[i], b[j]); // hoan doi b[i] vs b[j]
                for (k=0; k<n; ++k)
                    {swap(a[k][i], a[k][j]);}
            }

     printf("Mang sau sap xep:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", a[i][j]);
    
    return 0;
}