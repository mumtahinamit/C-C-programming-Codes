#include<stdio.h>
int main (){
    int a,sum=0,count=0;
    printf("Enter a number : \n");
    scanf("%d",&a);
    while (a!=0){
        sum+=a%10;
        count+=1;
        a=a/10;
    }
    printf("Total digits : %d\nSum : %d",count,sum);
    return 0;
}