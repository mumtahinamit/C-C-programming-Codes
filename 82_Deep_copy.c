#include<stdio.h>
int main (){
    char str[]="Physics wallah";
    int x=sizeof(str);
    printf("Size of first array : %d\n",x);
    char str2[x];
    str2[x-1]='\0';
    int i=0;
    while (str[i]!='\0'){
        str2[i]=str[i];
        i++;
    }
    printf("%s\n",str);
    printf("%s",str2);
    printf("\n...............................");

    // OR........................

    char* s1="Physics wallah";
    char* s2=s1;
    s2="College wallah";
    printf("\n%s\n%s",s1,s2);


}