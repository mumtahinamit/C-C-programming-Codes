#include<stdio.h>
int main (){
    int a;
    printf("Enter a number : \n");
    scanf("%d",&a);
        int count = 0;
        for (int i=2 ; i<a ; i++ ){
            if (a%i==0){
                count = 1;
                break;
            }
        }
        if (count == 0) printf("Prime");
        else printf("Not prime ");
    return 0;
}