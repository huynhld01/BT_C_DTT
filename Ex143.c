#include <stdio.h>
#include <math.h>
#define eps 1e-3

double Pi(){
    static k=0;
    double E = 4.0/(2*k+1);
    double s = pow(-1,k);
    if (E<eps) return 0;
    k++;
    return s*E + Pi();
}

int main(){
    printf("pi=%.3lf\n", Pi(0));
    return 0;
}