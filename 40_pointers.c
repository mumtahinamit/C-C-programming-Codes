#include <stdio.h>
int main (){
    int a=5,b=7;
    // & --> denotes address 
    // %p --> print address
    printf("Address of a : %p\n",&a);
    printf("Address of b : %p\n",&b);
    int *x = &a; // It is pointer --> x is storing address of a
    int *y;
    y=&b;
    printf("Address of a : %p\n",x);
    printf("Address of b : %p\n",y);
    printf("Address of x : %p\n",&x);
    printf("Address of y : %p\n",&y);
    int c=3;
    int *z=&c; 
    *z=5; //  *z --> Pointing the value of c and changing its value to 5 
    printf("Changed the value of c : c= %d & *z= %d\n",c,*z);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("Swapping : x = %d & y = %d",a,b);
    return 0;
}