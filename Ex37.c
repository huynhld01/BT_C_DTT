#include <stdio.h>

int main()
{
    unsigned n, m, s;

    do {
        printf("Nhap n:\n");
        scanf("%u", &n);
    } while (!n && printf("error\n"));

    s=0;
    m=1;
    while (s+m<n)
    {
        printf("%u", m);
        s += m++;
        if (s+m<n) printf("+");
    }
    if (s){
        printf("= %u < %u\n",s,n);
        printf("m = %u", m-1);
    }
    else printf("Not find\n");
    return 0;
}