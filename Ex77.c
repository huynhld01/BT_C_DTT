#include <stdio.h>

double invSum(int a[], int n){
    int i;
    double sum=0.0;
    for (i=0; i<n; ++i)
        if (a[i]) sum += 1.0/a[i];
    return sum;
}

int main(){
    int a[100], n, i, j;

    printf("Nhap n:\n");
    scanf("%d", &n);

    for (i=0; i<n; ++i)
        scanf("%d", a+i);
    
    printf("Tong nghich dao: %g\n", invSum(a,n));
    
    for (i=0; i<n; ++i){
        if (a[i]%2){
            n -= 1;
            for (j=i+1; j<n; ++j)
                a[j] = a[j+1];
        }
    }

    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    return 0;
}
