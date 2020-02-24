#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char tensach[80];
    char isbn[15];
    char tacgia[80];
    char nhaxuatban[32];
    struct tm* dateAdded;
} BOOK;

BOOK* inputBook(){
    BOOK* b;
    time_t now;
    printf("Nhap thong tin sach\n");
    b=(BOOK*)calloc(1,sizeof(BOOK));
    if (!b) return NULL;

    printf("Tua >"); fgets(b->tensach, 80, stdin);
    printf("ISBN >"); fgets(b->isbn, 15, stdin);
    printf("Tac Gia >"); fgets(b->tacgia, 80, stdin);
    printf("NXB >"); fgets(b->nhaxuatban, 32, stdin);
    time(&now);
    b->dateAdded = localtime(&now);
    return b;
}

void outputBook(BOOK *b){
    printf("%s", b->tensach);
    printf("%s %s", b->tacgia, b->nhaxuatban);
    printf("[Update: %02d-%02d-%d]\n", b->dateAdded->tm_mday, b->dateAdded->tm_mon+1, b->dateAdded->tm_year+1900);
}

BOOK *findBook(BOOK* books[], int n, char* ISBN){
    int i;
    for (i=0; i<n; ++i)
        if(strcmp(books[i] -> isbn, ISBN)==0)
            return books[i];
    return NULL;
}

int main(){
    BOOK* books[1000] = {0};
    BOOK* t;
    char s[15];
    int n=0;
    char c;
    do{
        c=0;
        if((books[n] = inputBook()) != NULL) n++;
        do {
            printf("Tiep (y/n)?");
            scanf("%1[yn]c", &c);
            while (getchar() != '\n'){}
        } while (!c);
    } while (c!='n');
    printf("ISBN?");
    fgets(s, 15, stdin);
    printf("Ket qua tim:\n");
    if ((t=findBook(books, n, s)) != NULL)
        outputBook(t);
    else printf("Khong tim thay\n");
    n=0;
    while (books[n]) free(books[n++]);
    return 0;
}