#include <stdio.h>
#include <math.h>

int isNT();

int main(){
    int n, count;

    printf("Nhap n: \n");
    scanf("%d", &n);

    for (int i=1, count = 0; i++;){
        if (isNT(i)) {
             printf("%d\t", i);
             count++;
             if (count==n) break;
        }
    }
    return 0;
}

int isNT(int n){
    int i;
    if (n==2) return 1;
    if (n<2 || n%2==0) return 0;
    for (i=3; i < (n>>1); i+=2)
        if (n%i==0) return 0;
    return 1;  
}