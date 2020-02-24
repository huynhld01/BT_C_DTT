#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100], n, i, j;

    printf("Nhap n: \n");
    scanf("%d", &n);

    for (i=0; i<n; ++i)
        scanf("%d", &a[i]);
    for (i=0; i<n; ++i)
    {
        for (j=0; j<i; ++j)
            if (a[j]==a[i]) break;
        if (j==i) printf("%d ", a[i]);
    }
    putchar('\n');
    return 0;
}
