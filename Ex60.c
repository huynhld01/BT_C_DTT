#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 100

/*Tron perfect shuffle*/
void shuffle(int a[], int n){
    int t[MAX], i;
    for (i=0; i<n/2; ++i){
        t[2*i] = a[i];
        t[2*i+1] = a[n/2+i];
    }
    memmove(a, t,(n-1)*sizeof(*a));
}

int isEqual(int a[], int b[], int n){
    int i;
    for (i=0; i<n; ++i)
        if (a[i] != b[i]) return 0;
    return 1;
}

int main(){
    int a[MAX], b[MAX];
    int n, i, count;

    srand(time(NULL));
    do{
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<2 || n%2);

    for (i=0; i<n; ++i)
        printf("%d", a[i] = b[i] = rand() % 201-100);
        putchar('\n');
    
    shuffle(a, n);
    for (i=0; i<n; ++i)
        printf("%d", a[i]);
    
    shuffle(b,n);
    count = 0;
    do {
        shuffle(b,n);
        count++;
    } while (!isEqual(a,b,n));
    printf("Can %d lan shuffle de mang tro ve ban dau\n", count);
    return 0;
}