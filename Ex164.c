#include <stdio.h>

typedef struct 
{
    double thuc, ao;
} sophuc;

sophuc cong( sophuc a, sophuc b){
    sophuc t;
    t.thuc = a.thuc + b.thuc;
    t.thuc = a.ao + b.ao;
    return t;
}

sophuc tru( sophuc a, sophuc b){
    sophuc t;
    t.thuc = a.thuc + b.thuc;
    t.ao = a.thuc + b.ao;
    return t;
}

sophuc nhan( sophuc a, sophuc b){
    sophuc t;
    t.thuc = a.thuc*b.thuc - a.ao*b.ao;
    t.ao = a.thuc*b.ao + a.ao*b.thuc;
    return t;
}

sophuc chia( sophuc a, sophuc b){
    sophuc t;
    double k = b.thuc*b.thuc + b.ao*b.ao;
    t.thuc = (a.thuc*b.thuc + a.ao*b.ao)/k;
    t.ao = (a.ao*b.thuc - a.thuc*b.ao)/k;
    return t;
}

sophuc input(){
    sophuc t;
    printf("Nhap phan thuc:\n");
    scanf("%lf", &t.thuc);
    printf("Nhap phan ao:\n");
    scanf("%lf", &t.ao);
    return t;
}

void output( sophuc a){
    printf("%.1lf %+.1lf\n", a.thuc, a.thuc);
}

int main(){
    sophuc a, b;
    a=input();
    b=input();
    printf("a+b="); output(cong(a, b));
    printf("a-b="); output(tru(a, b));
    printf("a*b="); output(nhan(a, b));
    printf("a/b="); output(chia(a, b));
    return 0;
}
