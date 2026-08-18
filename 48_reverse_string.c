#include <stdio.h>
int main (){
    char str[100];
    printf("Write : \n");
    gets(str);
    printf("Your input : \n");
    puts (str);
    printf("\nReverse of the input : \n");
    int count =0;
    while (str[count]!='\0') count++;
    int swap ;
    for (int i=0 ; i<count/2 ; i++){
        swap = str[i];
        str[i]=str[count-1-i];
        str[count-1-i]=swap;
    }
    puts(str);
}