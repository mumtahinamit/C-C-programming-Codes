/*
#include <stdio.h>
int main (){ 
    
    // Using Conditional Statement
    
    printf("Enter Two numbers :\n");
    int a,b,c;
    scanf("%d %d",&a,&b);
    (a>b) ? printf("Max = %d\n",a):printf("Max = %d\n",b);

    printf("Enter three numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    int max;
    max = (a>b) ? (a>c?a:c) : (b>c?b:c);
    printf("Max = %d",max);
}
*/


#include<stdio.h>
int main (){

    printf("Enter two numbers :\n");
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b) printf("Max = %d\n",a);
    else printf("Max = %d\n",b);

    // For 3 numbers, 3 methods :

    printf("Enter three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);

    // Method 1 :

    if(a>b && a>c) printf("%d is max\n",a);
    if(b>a && b>c) printf("%d is max\n",b);
    if(c>b && c>a) printf("%d is max\n",c);

    // Method 2 :
    
    printf("Enter three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){ 
        if(a>c) printf("Max = %d\n",a);  // Condition : a>b>c or a>c>b
        else printf("Max = %d\n",c);     // Condition : c>a>b
    }
    else {
        if(b>c) printf("Max = %d\n",b);
        else printf("Max = %d\n",c);
    }

    // Method 3 :

    printf("Enter three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c) printf("Max = %d",a);
    else {
        if(c>b) printf("Max =  %d",c);
        else printf("Max =  %d",b);
    }
}