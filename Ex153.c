#include <stdio.h>
float _trungbinh( int* a, int n){
    static int c=0;
    static float sum = 0;
    /*Neu c=0 return 0 else return sum/c*/
    if (n<1) return (!c)? 0: sum/c;
    if (a[n-1] < 0){
        sum += a[n-1];
        c++;
    }
    return _trungbinh(a, n-1);
}

int main(){
    int a[] = {-2, 3, -4, -5, 6,-8};
    int i;
    int n=sizeof a/ sizeof *a;

    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    printf("\nTBC cac phan tu am: %g", _trungbinh(a, n));
    return 0;
}