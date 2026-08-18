#include<stdio.h>
int main (){
    int a;

    // Pattern 1 :
    // ****...15 times
    
    printf("Enter the number : ");
    scanf("%d",&a);
    for (int i=1 ; i<=a ; i++){
        printf("* ");
    }
    printf("\n\n");

    // We can do it also by nested loop :

    for (int i=1 ; i<=3 ; i++){
        for (int i=1 ; i<=5 ; i++){
            printf("* ");
        }
    } 
}