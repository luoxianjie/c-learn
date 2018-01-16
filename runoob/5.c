#include <stdio.h>
#include <string.h>

typedef struct Books
{
    char name[50];
    double price;
} Book;

void main()
{
   Book book;

   strcpy( book.name,"JAVA");
   book.price = 52;

   printf("%s,%lf\n",book.name,book.price);
}

