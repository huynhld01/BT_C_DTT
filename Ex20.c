#include <stdio.h>

int main()
{
    unsigned kW;
    unsigned long money;

    printf("Nhap so kW da tieu thu: \n");
    scanf("%u", &kW);

    money = kW*500;
    if (kW > 100) 
        money += (kW-100)*300;
    if (kW > 250)
        money += (kW-250)*200;
    if (kW > 350)
        money += (kW-350)*500;
    printf("Chi phi: %lu", money);
    return 0;
}