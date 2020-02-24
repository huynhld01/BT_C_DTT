#include <stdio.h>

int isDoixung(int *a, int n){
    if (n<2) return 1;
    /*So sanh phan tu dau va cuoi mang*/
    if (a[0] != a[n-1]) return 0;
    /*Giam 2 phan tu dau va cuoi sau moi lan goi*/
    return isDoixung(a+1, n-2);
}

int main(){
    int a[] = {1,2,3,4,3,2,1};
    int i;
    int n=sizeof a/ sizeof *a;

    for (i=0; i<n; ++i)
        printf("%d ", a[i]);
    
    if (isDoixung(a,n)) printf("Mang doi xung.\n");
    else printf("Mang khong doi xung\n");
    return 0;
    
}


