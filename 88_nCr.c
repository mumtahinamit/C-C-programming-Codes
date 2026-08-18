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
    int ncr=fact(n)/(fact(r)*fact(n-r));
    printf("Factorial of %dC%d is  :  %d",n,r,ncr);
}