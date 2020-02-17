#include <stdio.h>

int main(){
    unsigned n, i, dem, tong;

    printf("Nhap n: \n");
    scanf("%u", &n);

    printf("Cac uoc so la:\n");
    for (i=1, tong =0, dem = 0; i <= n; i++)
    {
        if (n%i == 0){
            printf("%d ", i);
            dem++;
            tong += i;
        }
    }
    printf("\nCo %u uoc so\nTong la %u\n", dem, tong);
    return 0;
}