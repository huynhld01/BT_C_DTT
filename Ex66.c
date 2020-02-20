#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main()
{
    int a[MAX];
    int n, i, k, max, min;

    srand(time(NULL));
    do {
        printf("Nhap n [1, %d]:\n", MAX-1);
        scanf("%d", &n);
    } while (n<1 || n>MAX-1);

    for (i=0; i<n; ++i)
        printf("%d ", a[i] = rand()%201-100);
    putchar('\n');

    max=min=0;
    for (i=0; i<n; ++i){
        if (a[i]>a[max]) max = i;
        if (a[i]<a[min]) min = i;
    }
    printf("MAX = %d\n", a[max]);
    printf("MIN = %d\n", a[min]);

    /*Duyet tu sau vi tri ma phan tu co tri lon nhat*/
    for (k=i=max+1; i<n; ++i)
        if (a[i]!= a[max]) a[k++] = a[i];
    n=k;

    /*In*/
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}