#include <stdio.h>
#include <stdlib.h>

size_t _strlen( const char *s){
    const char* p = s;
    while (*p) ++p;
    return p-s;
}

char* _strcpy(char *s, const char *t){
    char* p=s;
    while (*p++ =  *t++){}
    return s;
}

char* _strcat( char *s, const char *t){
    char *p = s;
    while (*p) ++p;
    while (*p++ = *t++){}
    return s;
}

int main(){
    char* buf;
    size_t size;
    char s1[] = "Huynh ld";
    char s2[] = "ptit123";

    size = sizeof(s1) - 1 + sizeof(s2)-1+1;
    if (!(buf = (char*)malloc(size))){
        printf("Loi cap nhat");
        return 1;
    }

    printf("Chuoi 1:[%s] (%lu)\n", s1, (unsigned long)_strlen(s1 ));
    printf("Chuoi 2:[%s] (%lu)\n", s2, (unsigned long)_strlen(s2 ));
    printf("strcpy(buf, s1) roi strcat(buf, s2):\n");
    _strcat(_strcpy(buf,s1),s2);
    printf("[%s] (%lu)\n", buf, (unsigned long)_strlen(buf));
    free(buf);
    return 0;
}
