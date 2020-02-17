#include <stdio.h>

int main()
{
    unsigned d, m, y, top, dayofweek;

    printf("Nhap ngay, thang, nam: \n");
    scanf("%u%u%u", &d, &m, &y);

    /*Check nam*/
    if (y<1582){
        printf("Nam > 1582\n");
        return 1;
    }

    /*Check thang*/
    if (m<1 || m>12){
        printf("Thang khong hop le\n");
        return 2;
    }

    switch (m)
    {
    case 4: case 6: case 9: case 11: 
        top = 30;
        break;
    case 2:
        top = 28 + ((y%4==0 && y%100) || y%400==0);
        break;
    default: top = 31;
    }

    /*Check ngay*/
    if (d<1 || d>top){
        printf("Ngay khonf hop le\n");
    return 3;
    }
    printf("Hop le\n");

    /*Cong thuc Zeller*/
    y -= (14-m) / 12;
    m += 12*((14-m)/12)-2;
    dayofweek = (d+y+y/4-y/100+y/400+(31*m)/12)%7;
    
    switch (dayofweek)
    {
    case 0: printf("CN\n");
        break;
    case 1: printf("Thu 2\n");
        break;
    case 2: printf("Thu 3\n");
        break;
    case 3: printf("Thu 4\n");
        break;
    case 4: printf("Thu 5\n");
        break;
    case 5: printf("Thu 6\n");
        break;
    default: printf("Thu 7\n");
        break;
    }
    return 0;
}