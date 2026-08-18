#include<stdio.h>
int main (){
    float a,b;
    char x;
    printf("Enter an operator :");
    scanf("%c",&x);
    printf("Enter two numbers : \n");
    scanf("%f%f",&a,&b);
    switch (x){
        case '+':
        printf("%.2f %c %.2f = %.2f",a,x,b,a+b);
        break;
         case '-':
        printf("%.2f %c %.2f = %.2f",a,x,b,a-b);
        break;
         case '*':
        printf("%.2f %c %.2f = %.2f",a,x,b,a*b);
        break;
        case '/':
        printf("%.2f %c %.2f = %.2f",a,x,b,a/b);
        break;
        default:
        printf("ERROR");    }
    return 0;
}