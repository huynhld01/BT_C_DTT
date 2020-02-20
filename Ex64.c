#include <stdio.h>
#include <math.h>
#define ispow2(x) (!((x) & ((x)-1)) && x)
int main()
{
    int n, i, c, x, a[100];

    printf("Nhap phan tu mang: \n");
    scanf("%d", &n);

    for (i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }

    for (c=i=0; i<n; ++i){
        if (ispow2(a[i])) c++;
    printf("Co %d phan tu la luy thua cua 2.\n", c);

    printf("Nhap x:\n");
    scanf("%d", &x);
    for (c=i=0; i<n; ++i)
        /*Thay vi xoa, ta them cac phan tu khac x vao mang moi*/
        if (a[i]!=x) a[c++] = a[i];
    n=c;

    /*In mang cap nhat*/
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
    }

    
}