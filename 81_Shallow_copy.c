#include <stdio.h>
int main (){
    char str[]="Physiccs wallah";
    char* str2=str; // str2 is a shallow copy
    str[0]='M';
    printf("%s",str2); // str2 pointing to str...same string 
    return 0;

}