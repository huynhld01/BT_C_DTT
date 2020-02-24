#include <stdio.h>
#define MAX 100

int checkmatrix(int a[][MAX],int n){
    int i, j;
    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            if (a[i][i] == 1 && a[i][j]==0) return 1;
    return 0;
}

int main(){
    int a[MAX][MAX];
    int n, i, j;

    do
    {
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<1 || n>MAX);
    
    printf("Nhap ma tran:\n");
    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            scanf("%d", &a[i][j]);
    
    if (checkmatrix(a,n)){
        printf("Ma tran dong nhat.\n");
    }
    else {
        for (i=0; i<n; ++i, putchar('\n'))
            for (j=0; j<n; ++j)
               printf("%5d", i==j);
    }

}