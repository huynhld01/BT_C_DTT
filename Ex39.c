#include <stdio.h>

int main(){
    unsigned x, y, z;

    for ( x = 0; x < 100; ++x)
        for (y = 0; y < 100; ++y)
            for (z = 0; z < 100; z++)
            if (x*x + y*y == z*z){
                if (y-x==1 && z-y==1)
                    printf("%u, %u, %u la ba so nguyen lien tiep.\n", x,y,z);
                if (y%2==0 && y-x==2 && z-y==2)
                    printf("%u, %u, %u la 3 so chan line tiep.\n", x,y,z);
            }
    return 0;
}