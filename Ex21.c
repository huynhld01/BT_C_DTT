#include <stdio.h>

int main(){
    float m1, m2, m3, tong, dc;
    char kv;
    unsigned  dt;

    printf("Nhap diem chuan:\n");
    scanf("%f", &dc);
    printf("Nhap diem 3 mon:\n");
    scanf("%f%f%f", &m1, &m2, &m3);
    while(getchar() != '\n'){}
    printf("Nhap khu vuc:\n");
    scanf("%c", &kv);
    printf("Nhap doi tuong:\n");
    scanf("%u", &dt);

    if (m1*m2*m3){
        tong = m1+m2+m3;
        switch (kv)
        {
        case 'A': 
            tong += 2; break;
        case 'B':
            tong += 1; break;
        case 'C':
            tong += 0.5; break;
        }

        switch (dt)
        {
        case 1:
            tong += 2.5; break;
        case 2:
            tong += 1.5; break;
        case 3:
            tong += 1; break;
        }
    printf("%s %g\n", tong >= dc ? "Do" : "Truot", tong);    
    }
    else printf("Diem liet\n");
    return 0;
}