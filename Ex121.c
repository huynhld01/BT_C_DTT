#include <stdio.h>
#include <string.h>

int removeString(char *s, int start, int count){
    size_t len = strlen(s);
    if (start > len || start < 0 || len < start + count)
        return 1;
    strcpy(&s[start], &s[start+count]); //copy tu vi tri count vao vi tri start
    return 0;
}

int main(){
    char s[80], *t;
    int start, count;

    printf("Nhap chuoi:");
    fgets(s, 80, stdin);
    if ((t=strrchr(s, '\n')) != NULL) *t = '\0';
    printf("Nhap vi tri ban dau:\n");
    scanf("%d", &start);
    printf("Nhap so ki tu loai bo:");
    scanf("%d", &count);
    if (removeString(s, start, count)) puts("Error!");
    else printf("Chuoi ket qua: %s\n", s);
    return 0;
}