#include <stdio.h>

int swap( int *a, int *b){
    int t=*a; *a=*b; *b=t;
}

void bubbleSort( int a[], int n){
    int i;
    if (n<2) return;
    for (i=0; i<n-1; ++i)
        if (a[i]<a[i+1])
            /*swap(&a[i], &a[i+1]*/
            swap(a+i, a+i+1);
    bubbleSort(a, n-1);
}

int main(){
    int a[] = {9,7,4,2,5,8,3,1,0};
    int n = sizeof a/ sizeof *a;
    int i;

    printf("Mang goc:\n");
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');

    bubbleSort(a, n);
    printf("Mang giam:\n");
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}