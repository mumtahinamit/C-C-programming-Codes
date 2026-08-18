#include<stdio.h>
#include <math.h>
#define PI 3.1416

int main (){
    printf("The sides of a triangle : \na=3\nb=4\nc=5\n");
    printf("Radius of a circle : 5\n");
    int  a=3,b=4,c=5;
    float s=(a+b+c)/2.0;
    float area1 = sqrt(s*(s-a)*(s-b)*(s-c));
    int r=5;
    float area2 = PI * r * r; 
    printf("Area of the triangle : %.4f\n",area1); // upto 4 decimals
    printf("Area of the circle : %5.3f ",area2);   // upto 3 decimals and total 5 digits
    return 0;
}