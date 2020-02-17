#include <stdio.h>
#include <math.h>

double area(double xA, double xB, double xC, double yA, double yB, double yC){
    return 0.5*fabs(xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC);
}

int main(){
    double xA, yA, xB, yB, xC, yC, xM, yM;
    double d;

    printf("A(xA, yA) : \n");
    scanf("%lf%lf", &xA, yA);
    printf("B(xA, yA) : \n");
    scanf("%lf%lf", &xB, yB);
    printf("C(xC, yC) : \n");
    scanf("%lf%lf", &xC, yC);
    printf("M(xM, yM) : \n");
    scanf("%lf%lf", &xM, yM);

    d = area(xM, yM, xA, yA, xB, yB) + area(xM, yM, xB, yB, xC, yC)
      + area(xM, yM, xA, yA, xC, yC) - area(xA, yA, xB, yB, xC, yC);

    if (d>0) printf("M nam ngoai tam giac ABC\n");
    else 
        if (area(xM, yM, xB, yB, xC, yC)||
            area(xM, yM, xA, yA, xB, yB)||
            area(xM, yM, xA, yA, xC, yC))
        printf("M nam tren canh ABC\n");
        else    printf("M nam trong tam giac ABC\n");
    return 0; 

}