#include <stdio.h>
int main (){
    char str1[100],str2[100];
    printf("Write in 1st string: \n");
    gets(str1);
    printf("Write in 2nd string: \n");
    gets(str2);
    int count1=0,count2=0;
    while (str1[count1]!='\0') count1++;
    while (str2[count2]!='\0') count2++;
    if (count1!=count2){
        puts("String is not equal");
    }
    else {
        int unequal=0;
        for (int i=0 ; i<count1 ; count1++){
            if (str1[i]!=str2[i]) {
                unequal=1;
                break;
            }
        }
        if (unequal==1) printf("String is not equal");
        else printf("String is equal");
    }
    return 0;
}