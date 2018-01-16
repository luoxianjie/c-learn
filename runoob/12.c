#include <stdio.h>

void swap(int *,int *);

void main()
{
    int a,b;
    a = 10;
    b = 20;
    swap(&a,&b);

    printf("a=%d,b=%d",a,b);
}

void swap(int *a,int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = *c;
    printf("a=%d,b=%d",*a,*b);
}