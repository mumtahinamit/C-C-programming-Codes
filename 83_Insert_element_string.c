#include<stdio.h>
int main(){
    char str[9]="College";
    char x='K';
    for (int i=6 ; i>=2 ; i--){
        str[i+1]=str[i];
    }
    str[2]=x;
    printf("%s",str);

    return 0;
}