#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int a[], int n){
    int i, j;
    for (i=0; i<n; ++i)
        for (j=i+1; j<n; ++j)
        /*sap xep tang*/
            if (a[i] > a[j])
            {int temp = a[i]; a[i]=a[j]; a[j]=temp;}
}

void insertOrder(int a[], int *n, int x){
    int i=0;
    while (i<*n && a[i]<x) i++;
    if (i<*n)
        memmove(a+i+1, a+1, (*n-1)*sizeof(*a));
    a[i] = x;
    (*n)++;
}

int main(){
    int a[100], n, i, j, x;

    printf("Nhap n: \n");
    scanf("%d", &n);

    for (i=0; i<n; ++i)
        scanf("%d", a+i);

    printf("Sap xep tang\n");
    sort(a, n);
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);

    printf("Nhap x: \n");
    scanf("%d", &x);
    insertOrder(a, &n, x);

    for (i=0; i<n; i++)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}