#include <stdio.h>
int main()
{
    int a,count=0,first_digit,last_digit;
    printf("Enter any number : ");
    scanf("%d",&a);
    last_digit=a%10;
    while (a!=0){
        first_digit=a;
        a=a/10;
    }
    printf("First digit : %d\nLast digit : %d",first_digit,last_digit);
    return 0;
}