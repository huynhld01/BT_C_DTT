#include <stdio.h>

int main(){
    unsigned h;

    printf("Nhap so gio: \n");
    scanf("%u", &h);
    printf("%u Tuan, %u Ngay, %u Gio\n", h/(24*7), (h%(24*7))/24, (h%(24*7))%24);
    return 0;
}