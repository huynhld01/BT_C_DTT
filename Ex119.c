#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[255];
    char* p=s;
    int tam[7]={0};
    int i, count;

    printf("Nhap chuoi:");
    fgets(s, 255, stdin);
    count=0;
    while ((p=strtok(p,".,")) != NULL){
        if (isalpha(p[0])){
            count++;
            tam[strlen(p)-1]++;
        }
        p=NULL;
    }
    printf("Co %d tu\n", count);
    printf("Tan so xuat hien cac tu:\n");
    for (i=0; i<7; ++i)
        printf("%d[%d] ", i+1, tam[i]);
    putchar('\n');
    return 0;
}