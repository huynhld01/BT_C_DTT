#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100], n, i, j, c;

    printf("Nhap n:\n");
    scanf("%d", &n);

    for (i=0; i<n; ++i)
        scanf("%d", a+i);
    
    for (i=0; i<n; ++i){
        for (c = j = 0; j<n; ++j)
            if (a[j] == a[i])
                /*Tinh tu phan tu sau a[i]*/
                if(j<i) break;
                else c++;
        if (c) printf("%d[%d] ", a[i], c);
    }
    putchar('\n');
    return 0;

}