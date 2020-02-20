#include <stdio.h>
#include <math.h>

int main(){
    unsigned i, j, sum;

    printf("So Armstrong co 3-4 chu so: \n");
    for (i=100; i<9999; ++i){
        /*j dung tach cac chu so cua i*/
        for (sum = 0, j=i; sum<=i && j>0; j/=10)
            sum+=(unsigned)pow(j%10, i<1000 ? 3:4);
            if (i==sum) printf("%u\t", i);
    }
    putchar('\n');
    return 0;
}
    
