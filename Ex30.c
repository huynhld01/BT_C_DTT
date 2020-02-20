#include <stdio.h>

int main()
{
    double lai, von;
    unsigned nam, thoi_han, n;

    do{
        printf("Nhap lai suat, tien von, thoi han:\n");
        n = scanf("%lf%lf%u", &lai, &von, &n);
        while (getchar() != '\n')
            if (n!=3 || n==EOF)
                printf("Nhap thieu hoac loi\n");
    } while (n != 3 || n==EOF);

    printf("Lai suat: %g\n", lai*100);
    printf("Von ban dau: %g\n", von);
    printf("Thoi han: %g\n", thoi_han);
    printf("%3s%10s\n", "Nam", "Von");
    for (nam = 1; nam <= thoi_han; ++nam){
        von *= 1 + lai;
        printf("%3u%10g\n", nam, von);
    }
    return 0;
}