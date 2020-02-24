#include <stdio.h>

int Oddsum(int a[], int n){
    if (n<1) return 0;
    /*Neu phan tu cuoi cung le */
    return (a[n-1]%2) ? a[n-1] + Oddsum(a, n-1): Oddsum(a,n-1);
}

int main(){
    int a[] = {2,3,4,5,6,7};
    int n = sizeof a/ sizeof *a;
    int i;

    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    printf("\nTong cac phan tu le: %d", Oddsum(a, n));
    return 0;
}