#include <stdio.h>

void _hanoitower(int n, int nguon, int dich){
    if (n==1)
        printf("Disk %d: [%d]->[%d]\n", n, nguon, dich);
    else {
        int giua = 6-(nguon+dich);
        _hanoitower(n-1, nguon, giua);
        printf("Disk %d: [%d]->[%d]\n", n, nguon, dich);
        _hanoitower(n-1, giua, dich);
    }
}

int main(){
    _hanoitower(3,1,3);
    return 0;
}