#include<stdio.h>
int main (){

//Factors : 

    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Factors : \n");
    for (int i=1 ; i<=a ; i++){
        if (a%i==0) printf("%d ",i);
    }
    printf("\n");

//Prime factors :

    printf("Prime factors : \n");
    for (int i=2 ; i<=a ; i++){
        if (a%i==0) {
            int notprime = 0;
            for (int j=2 ; j<i ; j++){
                if (i%j==0) notprime=1;
                break;
            }
            if (notprime==0) printf("%d ",i);
        }
    }
    return 0;
}