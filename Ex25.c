#include <stdio.h>

int main(){
    unsigned int a, b;
    unsigned gcd, lcd;

    printf("Nhap a, b:\n");
    scanf("%u%u", &a, &b);

    gcd = a; 

    while (a%gcd || b%gcd){
        gcd--;
    }

    lcd = a;
    while (lcd%a || lcd%b)
    {
        lcd++;
    }
    printf("UCLN %u\nBCNN %u\n", gcd, lcd);
    return 0;

    
}