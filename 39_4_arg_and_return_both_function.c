#include<stdio.h>
int addition (int x, int y){
    return x+y;
}
int main (){
    int a,b ;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    int sum = addition (a,b);
    printf("Sum : %d",sum);
    return 0;
}