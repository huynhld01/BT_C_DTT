#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isdoixung(int a[], int n){
    int i;
    for (i=0; i<n/2; ++i)
        if (a[i] != a[n-1-i]) return 0;
    return 1;
}

void dich(int a[], int n, int k){
    /**********DICH TRAI MANG k VI TRI************
      B1: Luu tam a[0] vao bien t
      B2: (n-1) phan tu cua mang bat dau tu a[1]
        duoc dich trai 1 phan tu chong len a[0]
        bang ham memmove()
      B3: a[n-1] = t nghia la bang a[0] vua bi day khoi dau day*/
    int i;
    k%=n;
    for (i=0; i<k; ++i){
        int t=a[0];
        memmove(a, a+1, (n-1)*sizeof(*a));
        a[n-1] = t;
    }
}
int main()
{
    int a[100], n, i, k;

    printf("Nhap n:\n");
    scanf("%d", &n);
    printf("Nhap mang:\n");
    for (i=0; i<n; ++i)
        scanf("%d", a+i);

    printf(isdoixung(a, n) ? "Doi xung\n" : "Khong doi xung\n");

    printf("Nhap so lan can dich:\n");
    scanf("%d", &k);
    dich(a, n, k);

    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;

}