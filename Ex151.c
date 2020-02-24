#include <stdio.h>

int Maxarr(int *a, int n){
    if (n<2) return 0;
    return (a[n-1] > a[Maxarr(a,n-1)])? n-1:Maxarr(a, n-1);   
}

int main(){
    int a[] = {-2, 3,-4, -5, 6,-8};
    int i;
    int n = sizeof a/ sizeof *a;
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    
    i=Maxarr(a, n);
    printf("\nMax=a[%d] = %d\n", i, a[i]);
    return 0;
}