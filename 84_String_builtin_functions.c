#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main (){
    char* str="Physics Wallah";
    char arr[]="College Wallah";
    int q=strlen(arr);
    int w=strlen(str);
    printf("%d\n%d\n%d",q,w,sizeof(arr));

    // Deep copy :
    // NOTE : pointer -> read only -> not valid
    printf("\n......................\n");
    char s1[12]="Raghav Garg";
    char s2[12];
    strcpy(s2,s1);
    printf("%s\n%s",s1,s2);

    printf("\n......................\n");
    // NOTE : pointer -> read only -> not valid
    char a[12]="Raghav ";
    char b[5]="Garg";
    strcat(a,b);
    printf("%s\n%s",a,b);

    printf("\n......................\n");
    bool x=strcmp(a,b);
    if(x==false) printf("False");
    else printf("True");


    return 0;
}