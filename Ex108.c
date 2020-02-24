#include <stdio.h>
#define MAX 20
#define AK a[i][j] = ++k; if (k==n*n) goto RET;

int main(){
    int a[MAX][MAX];
    int i, j, k, n;

    printf("Nhap n:\n");
    scanf("%d", &n);

    i=j=k=0;
    while(1){
        do {AK; j++;} while (j<n-i-1); // di dan sang phai
        do {AK; i++;} while (j>i);  //giam dan xuong duoi
        do {AK; j--;} while (j>n-i-1); //di dan sang trai
        do {AK; i--;} while (j<i-1); //giam dan len tren
    }
RET:
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%3d", a[i][j]);
    return 0;
}