#include <stdio.h>
#include <ctype.h>

int _giaithua(int n){
    if (n==0) return 1;
    return (n*_giaithua(n-1));
}

int _str2int(char *s){
    int n=0;
    while (isspace(*s)) s++;
    if (!isdigit(*s)) return -1;
    while (isdigit(*s)) n=n*10 + *s++ - '0';
    return *s ? -1:n;
}

int main(int argc, char *argv[]){
    int i, rv=0;
    for (i=1; i<argc; ++i){
        int n = _str2int(argv[i]);
        if (n==-1 && ++rv) printf("%s: so khong hop le\n", argv[i]);
        else               printf("%d! - %ld\n", n, _giaithua(n));
    }
    return rv;
}