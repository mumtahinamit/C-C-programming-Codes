#include<stdio.h>
void addition(int x,int y){
    int sum=x+y;
    printf("Sum : %d",sum);
    return;
}
int main (){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    addition(a,b);
    return 0;
}