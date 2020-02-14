#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Nhap 3 canh: \n");
    scanf("%f%f%f", &a, &b, &c);

    if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
        unsigned f = 0;
        if (a==b || b==c || c==a) f+=1;
        if (a==b && b==c) f+=1;
        if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) f+=3;

        switch(f){
            case 0: printf("Tam giac thuong.\n"); break;
            case 1: printf("Tam giac can.\n"); break;
            case 2: printf("Tam giac deu.\n"); break;
            case 3: printf("Tam giac vuong.\n"); break;
            case 4: printf("Tam giac vuong can.\n");
        }
        float p =(a+b+c)/2;
        printf("Dien tich S = %g\n", sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    
    else printf("Khong hop le.\n");
    return 0;
}