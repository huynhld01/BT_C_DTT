#include <stdio.h>

int isPerfect();
int main(){
    unsigned n, i;

    printf("Nhap n:\n");
    scanf("%u", &n);

    for ( i = 1; i < n; i++)
    {
        if (isPerfect(i))
            printf("%u ", i);
    }
    return 0;
}
int isPerfect(int n){
    unsigned i, sum;
    for (i=1, sum=0; i < n; i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum == n) return 1;
    else return 0;
}