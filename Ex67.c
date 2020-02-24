#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(){
    int a[MAX];
    int n, i, j, temp;

    do
    {
        printf("Nhap n [1:%d]\n",MAX-1);
        scanf("%d", &n);
    } while (n<1 || n>MAX-1);

    for (i=0; i<n; ++i)
        printf("%d ", a[i] = rand()%201-100);
    putchar('\n');

    for (i=0; i<n-1; ++i)
        for (j=i+1; j<n; ++j)
            if ((a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) || 
                (a[i]%2 && a[j]%2 && a[i]<a[j]))
                {   /*Sap xep*/
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    
    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;


}