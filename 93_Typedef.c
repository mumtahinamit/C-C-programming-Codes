#include<stdio.h>

// typedef oldname newname
typedef int integer;
typedef int* int_ptr;

typedef struct book{
    int page;
    float price;
} book;  // --> Here writing 'book' is must to work typedef

int main (){
    int a=5,b=6;
    integer c=7,d=8;
    int *u=&a,*v=&b;
    int_ptr x=&a,y=&b;
    printf("a : %d\nb : %d\nc : %d\nd : %d\nu : %p\nv : %p\nx : %p\ny : %p",a,b,c,d,u,v,x,y);
    book first;
    first.page=200;
    first.price=21.87;

}