#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int gcd( int a, int b){
    return (!a) ? b : gcd(b%a, a);
}

int main(){
    int a[MAX], n, i, j, s1, s2;
    srand( time(NULL));
    do {
        printf("Nhap n[1,%d]: ", MAX-1);
        scanf("%d",&n);
    } while (n<1 || n>MAX-1);

    for (i=0; i<n; ++i)
        printf("%d ", a[i] = rand() % 11 + 10);

    for (s1=s2=i=0; i<n; ++i){
        if (i%2 && a[i]%2==0) s1+=a[i];
        if (i%2==0 && a[i]%2) s2+=a[i];
    }
    printf("\nTong le vi tri chan: %d", s1);
    printf(s1==s2 ? "bang" : "khac");
    printf("Tong chan vi tri le: %d", s2);

    printf("cac cap nguyen to trung nhau:\n");
    for (i=0; i<n; ++i)
        for (j=i+1; j<n; ++j)
            if (gcd(a[i], a[j]) == 1)
            printf("(%2d,%2d)\n", a[i], a[j]);
    return 0;
}