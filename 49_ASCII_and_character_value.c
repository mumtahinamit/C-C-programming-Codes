#include<stdio.h>
int main (){
    char p='A';
    printf("ASCII value of character 'A' is : %d\n",p);
    int q=65;
    printf("Character value of integer 65 is : %c\n",q);
    char a='5';
    printf("ASCII value of character '5' is : %d\n",a);
    int b=53;
    printf("Character value of integer 53 is : %c\n",b);
    char X='53';
    printf("ASCII value of character '53' is : %d (which occupies random value/error)\n",X);
    char c='0';
    printf("ASCII value of character '0' is : %d\n",c);
    int d=48;
    printf("Character value of integer 48 is : %c\n",d);
    char e='\0';
    printf("ASCII value of character e is : %d\n",e);
    int f=0;
    printf("Character value of integer 0 is : %c\n",f);
    printf("You can see me \0 but now you don't as \0 terminates string!!!\n");
}