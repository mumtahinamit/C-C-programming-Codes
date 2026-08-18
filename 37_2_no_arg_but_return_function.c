#include<stdio.h>
int addition(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    return a+b; 
}
    int main (){
    int sum=addition();
    printf("Sum : %d",sum);
    return 0;
}