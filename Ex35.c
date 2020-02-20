#include <stdio.h>
#include <math.h>

int isNT();

int main(){
    unsigned n;

    printf("Nhap n: \n");
    scanf("%u", &n);

    if (isNT(n)) printf("%u la SNT\n", n);
    else{
        for (int i=n-1; i>=2; i++){
            if (isNT(i)){
                printf("So NT gan n nhat %u", i);
                break;
            }
        }
    }
    return 0;
}

int isNT(int n){
    if (n==2) return 1;
    if (n<2) return 0;
    for (int i=2; i<=n/2; ++i)
        if (n%i==0) return 0;
        else return 1;
}