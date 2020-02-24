#include <stdio.h>
#define MAX 100

int main(){
    int a[MAX];
    int n, i, j, count, max, min, vitri;

    do {
        printf("Nhap n:\n");
        scanf("%d", &n);
    } while (n<1 || n>MAX-1);
    for (i=0; i<n; ++i)
        scanf("%d", a+i);
    
    /*Phan tu xuat hien nhieu nhat*/
    vitri = max = 0;
    for (i=0; i<n; ++i){
        for (count=1, j=i+1; j<n; ++j)
            if (a[j] == a[i]) count++;
        if (count > max) {
            max = count;
            vitri = i;
        }
    }
    printf("Phan tu a[%d] xuat hien nhieu nhat: %d\n", a[vitri], max);

    /*Phan tu xuat hien it nhat*/
    vitri = min = n;
    for (i=0; i<n; ++i){
        for (count = j = 0; j<n; ++j)
            if (a[i] == a[j]) 
                if (j<i) break;
                else count++;
        if (count && count < min){
            min = count;
            vitri = i;
        }
    }
    printf("Phan tu a[%d] xuat hien it nhat: %d\n", a[vitri], min);
    return 0;

}