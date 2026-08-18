#include<stdio.h>
int main (){

    char a='A';
    while (a<='Z'){
        printf("%d -> %c\n",a,a);
        a++;
    }

    
    printf("\n\n");

    // BY TYPECASTING :
    
    int x=97;
    char ch;
    while (x<=122) {
        ch=(char)x;
        printf("%d -> %c\n",x,ch);
        x++;
    }

    // Predict the output : 
    char c='A';
    int p=(int)c;
    printf("\n\nAnswer : %d",p);
    
    return 0; 
}