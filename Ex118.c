#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* _loaiSPACE( char* s){
    char* p = s;
    /*Tim chuoi co 2 space lien tiep*/
    while ((p = strstr(p, " ")) != NULL)
    {
        strcpy(p, p+1);
    if (*s==' ') strcpy(s, s+1); // luu ki tu tiep theo vao chuoi s
    p = s+strlen(s)-1;
    if (*p == ' ') *p = '\0';
    return s;
    }
}

char* _xuliWord( char* s){
    int i;
    if (!s) return NULL;
    s[0] = toupper(s[0]);   // Viet hoa chu cai dau
    for (i=1; s[i]; ++i)
        s[i] = tolower(s[i]);
    return s;
}

int main(){
    char str[] = " hUYNH> lD> ";
    char d[] = "\t\"'?!,.";
    char *p = str;

    printf("Chuoi goc: [%s]\n", str);
    printf("Loai space du: [%s]\n", _loaiSPACE(str));
    printf("Cac tu da chuan hoa:\n");
    while ((p = _xuliWord( strtok(p,d)))!= NULL){
        printf("%s\n", p);
        p = NULL;
    }
    return 0;
}
