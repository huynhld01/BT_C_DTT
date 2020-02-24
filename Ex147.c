#include <stdio.h>

void swap(int *a, int *b){
    int t=*a; *a=*b; *b=t;
}

int max( int *a, int n){
    int i, maxpos = 0;
    for (i=1; i<n; ++i)
        if (a[i]>a[maxpos]) maxpos=i;
    return maxpos;
}

void selectSort( int a[], int n){
    if (n<2) return;
    /*Doi cho phan tu lon nhat xuong cuoi mang*/
    /*swap(&a[n-1], &a[Max(a,n)]*/
    swap(a+n-1, a+max(a,n));
    selectSort(a, n-1);
}

int main(){
    int a[] = {9,8,6,3,5,2,5,0};
    int n = sizeof a/ sizeof *a;
    int i;

    printf("Mang goc:\n");
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');

    selectSort(a, n);
    printf("Mang da sap xep:\n");
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}