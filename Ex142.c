#include <stdio.h>

int main(){
    char c;
    /*De qui dau*/
    if ((c=getchar()) != '\n') main();
    putchar(c);
    return 0;
}