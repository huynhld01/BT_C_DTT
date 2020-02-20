#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[100];
    int n, i,s,p;

    srand(time(NULL));
    do{
        printf("Nhap n [1, 99]:\n");
        scanf("%d", &n);
    } while (n<1 || n >99);

    for (i=0; i<n; ++i)
        printf("%d ", a[i]=rand()%201-100);
    for (s=i=0; i<n; ++i) {
        if (a[i] > 0) s+=a[i];
    }
    printf("Tong cac so nguyen duong: %d\n", s);

    do{
        printf("Nhap chi so:\n");
        scanf("%d", &p);
    } while (p<0 || p>99);

    for (i=p+1; i<n; ++i)
        /*Chen*/
        a[i-1] = a[i];
    
    /*Giam n*/
    n--;

    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}