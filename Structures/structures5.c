#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

struct Book createBook() {
    struct Book newBook;
    printf("entere title\n");
    scanf("%s",&newBook.title);
    printf("entere author\n");
    scanf("%s",&newBook.author);
    printf("entere year\n");
    scanf("%d",&newBook.year);
   return newBook; 
}

int main() {
    
struct Book myBook = createBook();
   

    printf("Book Information:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Year: %d\n", myBook.year);

    return 0;
}