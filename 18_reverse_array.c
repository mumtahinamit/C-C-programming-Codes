#include <stdio.h>
int main (){

//By using another array :

    int a;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    int brr[a];
    for (int i=0 ; i<a ; i++){
        brr[i]=arr[a-1-i];
    }
    printf("Reverse array : \n");
    for (int i=0 ; i<a ; i++){
        printf("%d ",brr[i]);
    }
    printf("\n\n\n\n");

//By using the same array (swapping concept) :
    int swap;
    for (int i=0 ; i<a/2 ; i++){
        swap=arr[i];
        arr[i]=arr[a-1-i];
        arr[a-1-i]=swap;
    }
    printf("Reverse array : \n");
    for (int i=0 ; i<a ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}