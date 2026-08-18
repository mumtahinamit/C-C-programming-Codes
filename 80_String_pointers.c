#include <stdio.h>
int main (){
    // Revising some concepts : 

    char ch='L';
    char* ptr;
    ptr=&ch;  // Or, char* ptr=&ch;

    // Remember :
    // ptr -> address
    // *ptr -> value fetch

    printf("Address of ch : %p\n",ptr);
    // Alternative :
    printf("Address of ch : %p\n",&ch);


    // Now look :
    char str[]="College Wallah";
    printf("Address of str[0] : %p\n",&str[0]);
    printf("Address of str : %p\n",&str); // you can delete & sign as it's a string
    // That means address of the whole string = address of 1st element of string
    
    printf("Printing string : .........................\n");
    ptr=str; // ptr now points to str[0];
    while (*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");

    // Invalid initialization :
    // char arr[];
    // arr[]="Physics wallah";
    char arr[]="Physics wallah";
    arr[8]='S'; // Valid for individual elements only
    printf("\n\n%s\n\n\n\n",arr); 
    // Invalid for entire array : arr="College wallah"; --> (INVALID)



    // Valid initialilzation :
    // char* pt;
    // pt="JEE Wallah";
    char* pt="JEE wallah"; // Read only memory allocation
    // character pointer can also be used to store address of a string or a string
    // Here at first, a string has been formed "Physics wallah"
    // then a pointer has been formed that points 1st element of the string 'J'
    // This string has no name
    printf("%s\n\n\n",pt);
    printf("%p\n\n\n",pt);
    pt="LEE Sallah"; // Valid for entire array
    //  ^
    //  |
    //  pt

    printf("%s\n\n\n",pt);
    // Invalid for individual element : pt[5]='R'; --> (INVALID)
    // But we can fetch elements individually :
    printf("%c",*pt);
    pt++;
    printf("%c\n\n\n",*pt);
    // printf("%s",*pt); --> INVALID 




   // An experiment :

    char Experiment[]="Competition Wallah";
    char* pointr=Experiment;
    printf("%s\n",pointr);
    // MEMORY : Competition Wallah
    //          ^
    //          |
    //        pointr
    pointr="Amit Wallah";
    //      ^
    //      |
    //    pointr 
    // Now pointr Lost address of "Competition Wallah";
    printf("%s\n",Experiment); // Array didn't move
    printf("%s\n",pointr); // pointr moved
    printf(".....................\n");
    char* p=Experiment;
    *p='B';
    printf("%s\n",Experiment);
    printf("%s\n",p);
    p=&Experiment[5];
    *p='B';
    printf("%s\n",Experiment);
    printf("%s\n",p);
    p++;
    *p='B';
    printf("%s",Experiment);
    
    return 0;
}