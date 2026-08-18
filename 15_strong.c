#include<stdio.h>
int main (){
    int a,input_number,last_digit,sum=0,factorial;
    printf("Enter a number : ");
    scanf("%d",&a);
    input_number=a;
    while (a!=0){
        last_digit=a%10;
        factorial=1;
        for (int i=1 ; i<=last_digit ; i++){
            factorial=factorial*i;
        }
        sum+=factorial;
        a=a/10;
    }
    if(sum==input_number) printf("Strong");
    else printf("Not strong");
}