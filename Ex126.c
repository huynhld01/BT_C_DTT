#include <stdio.h>
#include <string.h>

void occur(const char *s, char c){
    const char* p=s;
    while ((p=strchr(p,c)) != NULL){
        printf("%u", p-s);
        p++;
    }
    putchar('\n');
}

int main(){
    char s[200], *t, c;

    printf("Nhap chuoi:");
    fgets(s, 100, stdin);
    if ((t==strrchr(s, '\n')) != NULL) *t='\0';
    printf("Tim ki tu nao?\n");
    scanf("%c", &c);
    printf("Vi tri xuat hien:\n");
    occur(s,c);
    return 0;
}