#include <stdio.h>

/*Khai bao forward*/
int gcd(int, int);
int gcdr(int a, int b){
    if (!a) return b;
    if (!b) return a;
    return gcd(b, a%b);
}

int gcd(int a, int b){
    if (!a && !b) return -1;
    if (a<0) a=-a;
    if (b<0) b=-b;
    return (gcdr(a,b));
}

int main(){
    int a, b, g;

    printf ("Nhap 2 so:\n");
    scanf("%d%d", &a, &b);
    printf("GCD(%d, %d)", a,b);
    if ((g=gcd(a,b)) == -1)
        printf("Khong xac dinh\n");
    else printf("=%d\n", g);
    return 0;
}