#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void swap(int *a, int *b){
    int t = *a; *a=*b; *b=t;
}

int main(){
    int a[MAX];
    int n, i, j;

    srand( time(NULL));
    do {
        printf("Nhap n[1;%d]:\n", MAX-1);
        scanf("%d", &n);
    } while (n<1 || n>MAX-1);

    for (i=0; i<n; ++i)
        printf("%d ", a[i]=rand()%201-100);
    putchar('\n');

    /*j chi phan tu dau mang, i dung de duyet. Neu a[i] le, hoan chuyen a[i] va a[j] va tang j*/
    for (i=j=0; i<n; ++i)
        if (a[i]%2) swap(a[i], a[j++]);
    /*So le cuoi cung la a[j-1], j chi phan tu dau mang con lai,
    i dung de duyet tiep neu a[i] = 0, hoan chuyen a[i] voi a[j] va tang j*/
    for (i=j; i<n; ++i)
        if(!a[i]) swap(a[i], a[j++]);
    
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;   
}