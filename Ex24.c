#include <stdio.h>

int main(){
    unsigned long n, t;
    unsigned u, sum=0, count = 0;

    printf("Nhap n:\n");
    scanf("%lu", &n);
    t=n;

    do{
        u = t%10;
        count++;
        sum += u; 
    } while (t /= 10);
    printf("So chu so: %u\n", count);
    printf("Tong cac chu so: %u\n", sum);
    printf("Chu so dau tien: %u\n", u);
    printf("chu so cuoi cung: %u\n",n%10);
    printf("So dao nguoc la: \n");
    /*Loai so 0 dau so dao*/
    while (n%10==0){
        n /= 10;
    }
    
    do printf("%lu", n%10);
    while (n/=10);
    putchar('\n');
    return 0;
}