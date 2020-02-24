#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 100
#define swap(a,b) {int t=a; a=b; b=t;}

int main(){
    int a[MAX], n, i, j, i1, j1, k;

    srand( time(NULL));
    do {
        printf( "Nhap n(n chan): \n");
        scanf("%d", &n);
    } while (n<2 || n%2);
    for (i=0; i<n; ++i)
        printf("%d ", a[i] = rand()%101+100);
    putchar('\n');

    for (k=0; k<n/2; ++k){
        /*Tim cap (a[i1], a[j1]) sao cho |a[i1]-a[j1]| nho nhat doan can xet 
        0->n-1, 1->n-2, ...k->n-k-1,..*/
        int min = 101;
        for (i=k; i<n-k; ++i)
            for (j=i+1; j<n-k; ++j)
                if (abs(a[i]-a[j]) < min){
                    min = abs(a[i]-a[j]);
                    i1=i;
                    j1=j;
                }
        /*Neu hieu a[i1]-a[j1]<0, doi cho*/
        if (a[i1] < a[j1]) swap( a[i1], a[j1]);
        /*a[i1] chuyen ve dau va a[j1] chuyen ve cuoi doan dang xet*/
        swap(a[i1], a[k]);
        swap(a[j1], a[n-k-1]);
    }
    for (j=i=0; i<n/2; ++i){
        /*In va tinh tong nua mang dau*/
        printf("%d ", &a[i]);
        j+=a[i];
    }
    printf("%d\n", j);
    for (j1=0; i<n; ++i){
        /*In va tinh tong nua mang sau*/
        printf("%d ", a[i]);
        j+=a[i];
    }
    printf(": %d\n", j1);
    printf("Hieu nho nhat = %d\n", j-j1);
    return 0;

}