#include <stdio.h>
#define MAX 100

int main(){
    int n, c, sum,i, j;
    int a[MAX];

    do{
        printf("Nhap so phan tu [1:%d]:\n", MAX-1);
        scanf("%d", &n);
    } while (n<1 || n>MAX);

    for (i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }

    for (i=0, c=0, sum=0; i<n; ++i){
        if (a[i]<0 && a[i]%2) {
            c++;
            sum+=a[i];
        }
    }
    printf("TBC so nguyen am le: %.2f\n",c ? (float)sum/c : 0);

    for (i=0; i<n-1; ++i){
        for (c=j=i+1; j<n; ++j)
            if (a[j]!=a[i]) a[c++] = a[j];
        n=c;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    


}