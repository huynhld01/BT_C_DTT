#include <stdio.h>

int main(){
    unsigned x,y,z;

    for (x=1; x<100/5; ++x)
        for (y=1; y<100/3; ++y){
        z=100-(x+y);
        if (300==15*x+9*y+z)
            printf("%2u, %2u, %2u\n", x,y,z);
        }
    return 0;
}