#include <stdio.h>
#include <math.h>

int _fibo(int n){
    return (n<3) ? 1 : _fibo(n-1) + _fibo(n-2);
}

int main(){
    int n;
    printf("Nhap n:\n");
    scanf("%d", &n);
    printf("Fibo n: %d\n", _fibo(n));
    return 0;
}