#include <stdio.h>
#include <string.h>

int main(){
    char s[255];
    int i, head;
    int maxhead, maxlen;

    printf("Nhap chuoi nhi phan:\n");
    // fgets(char *str, int num, FILE* stream)
    fgets(s, 255, stdin);

    head = maxhead = maxlen = 0;
    do
    {
        int len = 0;
        for (i=head; s[i] && s[i] == '0'; ++i)
            len++;
        if (len>maxlen) {maxlen=len; maxhead=head;}
        head = i+1;
    } while (s[i]);
    
    printf("Chuoi 0 dai nhat co %d ki tu\n", maxlen);
    printf("Bat dau tai s[%d]", maxhead);
    putchar('\n');
    return 0;
}