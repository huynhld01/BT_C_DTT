#include <stdio.h>
#define MAX 100

int checkmatrix(int a[][MAX], int n){
    int i,j;
    for (i=0; i<n; ++i)
        for (j=0; j<i; ++i)
            //Neu a[i][j] khac 0 -> loai
            if (a[i][j]) return 0;
    return 1;

}
int main(){
    int a[MAX][MAX];
    int n, i, j, sum;
    do {
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<1 || n>MAX);
    
    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            scanf("%d", &a[i][j]);

    printf("Mang da nhap:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%d\t", a[i][j]);
    
    for (sum=0, i=0; i<n; ++i)
        sum+=a[i][i];
    printf("Tong duong cheo chinh: %d\n", sum);
    
    if (checkmatrix(a,n)) {
        printf("Ma tran tam giac tren.\n");
        for (sum=1, i=0; i<n; ++i) sum*=a[i][i];
        printf("Det(A) = %d\n", sum);
    }
    else printf("A khong la ma tran tam giac tren.\n");
    return 0;
}