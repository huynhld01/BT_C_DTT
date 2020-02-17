#include <stdio.h>

int main(){
    unsigned h, m, s;
    long time;

    printf("Nhap gio1, phut1, giay1:\n");
    scanf("%u%u%u", &h, &m, &s);
    time = 3600*h + 60*m + s;

    printf("Nhap gio2, phut2, giay2:\n");
    scanf("%u%u%u",&h, &m, &s);
    time -= (3600*h + 60*m + s);

    if (time < 0) time = -time;
    printf("Time: %ld:%ld:%ld\n", time/3600, (time%3600)/60, (time%3600)%60);
    return 0;
}