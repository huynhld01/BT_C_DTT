#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 100

int main(){
    int a[MAX], n, i, count;

    srand (time(NULL));
    do {
        printf("Nhap n [1:%d]\n", MAX-1);
        scanf("%d", &n);
    } while (n<1 || n>MAX-1);

    printf("Mang:\n");
    for (i=0; i<n; ++i)
        printf("%d ", a[i] = rand()%201-100);
    
    for (count=i=0; i<n; ++i){
        if (a[i]%4==0 && abs(a[i])%10==6 ) count++;
        if (a[i]%2) a[i]*=2;
    }

    printf("Ket qua %d\n", count);
    for (i = 0; i<n; ++i)
    {
        printf("%d ", a[i]);
    }
    putchar('\n');
    return 0;
}