#include <stdio.h>

int main(){
    unsigned i, j;
    for (i=2; i<10; ++i){
        for (j=1; j<=10; j++)
            printf("%c%2d x %2d = %2d\n",179, i, j, i*j);
            printf("%c\n", 179);
    }
    return 0;
}