#include <stdio.h>
int main (){

    int a;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    char arr[a];
    printf("Enter the elements : ");
    getchar();
    for (int i=0 ; i<a ; i++){
        scanf("%c",&arr[i]);
    }
    int count = 0;
    for (int i=0 ; i<a/2 ; i++){
        if (arr[i]!=arr[a-1-i]) count++;
    }
    if(count==0) printf("Palindrome");
    else printf("Not palindrome");
}