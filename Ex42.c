#include <stdio.h>

int isPrime(unsigned n){
    unsigned i;
    if (n==2) return 1;
    if (n<2 || n%2==0) return 0;
    for (i=3; i<(n>>1); i+=2)
        if (n%i==0) return 0;
    return 1;
}

int main(){
    unsigned p[200], i, n, count;
    unsigned x,y,z;

    /*Xet 5<n<1000*/
    for (n=0, i=2; i<1000; ++i)
        if (isPrime(i)) p[n++] = i;
    printf("Co %u so nguyen to trong [5;1000]\n", n-3);
    for (count=0, i=3; i<n; ++i){
        for (x=0; x<i; ++x)
            for (y=x; y<i; ++y)
                for (z=i; z>y; --z)
                if (p[i] == p[x]+p[y]+p[z]){
                    printf("%3u = %u + %u + %u\n", p[i], p[x], p[y], p[z]);
                    count ++;
                    goto checked;
                }
                checked: {}
    } /*end for*/
    printf("Da kiem tra %u so nguyen to\n", count);
    return 0;
}