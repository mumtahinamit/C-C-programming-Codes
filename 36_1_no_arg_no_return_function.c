#include<stdio.h>
void addition (){
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    int add=a+b;
    printf("Sum of the two numbers : %d",add);
    return ;
}
int main (){
    addition();
    return 0; 
}