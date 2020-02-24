#include <stdio.h>
#define swap(a,b) {int t=a; a=b; b=t;}
int main(){
    int a[100][100];
    int n, i, j;

    printf("Nhap n:\n");
    scanf("%d", &n);

    for (i=0; i<n; ++i)
        for (j=0; j<n; ++j)
            scanf("%d", &a[i][j]);
    
    // Duyet theo hang
    for (i=0; i<n; ++i){
        int vitri = 0;
        for (j=0; j<n; ++j)
            if (a[i][j] > a[i][vitri]) vitri = j;
        // Hoan doi 
        swap(a[i][i], a[i][vitri]);
    }

    printf("Ma tran sau khi sap xep:\n");
    for (i=0; i<n; ++i, putchar('\n'))
        for (j=0; j<n; ++j)
            printf("%5d", a[i][j]);
    return 0;

}