#include <stdio.h>

int main(){
    int n, a[100], i, j, c;
    int max, oldmax, vitri;

    printf("Nhap n:\n");
    scanf("%d", &n);

    for (i=0; i<n; ++i){
        scanf("%d", a+i);
    }
    oldmax=0;
    vitri=-1;
    do {
        max = 0;
        for (i=vitri+1; i<n; ++i){
            for (c=1, j=i+1; j<n; ++j)
                if (a[j]==a[i]) c++;
            if (c>max) {max=c; vitri=i;}
        }
        if (max >= oldmax){
            printf("%d[%d]", a[vitri], max);
            oldmax = max;
        }
    } while (max == oldmax);
    putchar('\n');
    return 0;    
    }
