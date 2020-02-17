#include <stdio.h>

#define swap(a,b) {int t=a; a=b; b=t;}
int main(){
    int a, b, c, t;

    printf("\nNhap a, b, c: \n");
    scanf("%d%d%d", &a, &b, &c);
    /* a<b -> hoan chuyen a>b*/
    if (a<b) swap(a,b);
    /* a<c -> hoan chuyen a>c*/
    if (a<c) swap(a,c);
    /* b<c -> hoan chuyen b>c*/
    if (b<c) swap(b,c);

    printf("%d %d %d", c, b, a);
    return 0;
}

