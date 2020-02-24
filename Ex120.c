#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* chen_string(char* s, char* s1, size_t k){
    char* s2 = strdup(s); //sao phan dau chuoi s vao s2
    if (k>strlen(s)) k = strlen(s);
    strcpy(&s2[k], s1); //sao chuoi s1 vao vi tri k cua s2
    strcpy(&s2[k+strlen(s1)], &s[k]); //sao phan sau cua s vao s2
    return s2;
}

int main(){
    char s[80], s1[80], *t;
    unsigned long k;

    printf("Chuoi goc:\n");
    fgets(s, 80, stdin);
    if ((t=strrchr(s,'\n')) != NULL) *t='\0';
    printf("Chuoi chen:\n");
    fgets(s1, 80, stdin);
    if((t=strrchr(s1,'\n')) != NULL) *t='\0';

    printf("vi tri chen:\n");
    scanf("%lu", &k);
    printf("Chuoi ket qua:%s\n", chen_string(s, s1, (size_t)k));
    return 0;
}