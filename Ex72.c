#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 100

void dichphai(int a[], int n, int k){
    /**********DICH PHAI MANG k VI TRI************
      B1: Luu tam a[n-1] vao bien t
      B2: (n-1) phan tu cua mang bat dau tu a[0]
        duoc dich trai 1 phan tu chong len a[1]
        bang ham memmove()
      B3: a[0] = t nghia la bang a[n-1] vua bi day khoi cuoi day*/
    int i;
    for (i=0; i<k; ++i){
        int t = a[n-1];
        memmove(a+1, a, (n-1)*sizeof(*a));
        a[0] = t;
    }
}

int maxOdd( int a[], int n){
    int i, maxpos = -1;
    /*Tim phan tu co gia tri le dau tien*/
    for (i=0; i<n; ++i)
        if (a[i]%2) break;
    if (i<n){
        maxpos=i;
        for (i=maxpos+1; i<n; ++i)
            if (a[i]%2 && a[i]> a[maxpos]) maxpos = i;
    }
    return maxpos;
}

int main(){
    int a[MAX];
    int n, i, k;
    srand( time (NULL));
    do {
        printf("Nhap n[1, %d]: ", MAX-1);
        scanf("%d", &n);
    } while (n<1 || n>MAX-1);
    for (i=0; i<n; ++i)
        printf("%d ", a[i] = rand()%201-100);
    putchar('\n');

    if ((k=maxOdd(a, n)) >= 0)
        printf("Phan tu lon nhat a[%d] = %d\n", k, a[k]);
    else printf("Mang toan so chan \n");

    printf("Nhap so lan can dich:\n");
    scanf("%d", &k);
    k%=n;
    dichphai(a,n,k);
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}