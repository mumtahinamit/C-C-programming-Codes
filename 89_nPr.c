#include<stdio.h>
int fact(int x){
    if(x==0) return 1;
    x*=fact(x-1);
}
int main (){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int npr=fact(n)/fact(n-r);
    printf("Factorial of %dP%d is  :  %d",n,r,npr);
}