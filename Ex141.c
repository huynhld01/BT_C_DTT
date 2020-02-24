#include <stdio.h>

double danso( int year){
    if (year == 2000) return 8E+9;
    return danso(year-1)*(1+0.025);
}

int main(){
    int n;
    printf("Nhap nam:\n");
    scanf("%d", &n);
    printf("Dan so: %.f nguoi\n", danso(n));
    return 0;
}