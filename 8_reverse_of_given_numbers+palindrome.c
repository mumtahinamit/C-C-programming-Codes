#include <stdio.h>
int main(){
    int a,rev=0;
    printf("Enter a number : \n");
    scanf("%d",&a);
    int your_number=a;
    while (a!=0){
        rev=(rev*10)+(a%10);
        a=a/10;
    }
    printf("Reverse number : %d\n",rev);
    if (your_number==rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}