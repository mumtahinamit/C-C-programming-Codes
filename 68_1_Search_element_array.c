// Search an element in the array and printing index : 
#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("Enter element no. in the array : ");
    int a;
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element : ");
    int search;
    scanf("%d",&search);
    printf("Printing index : ");
    bool flag ;
    for (int i=0 ; i<(sizeof(arr)/4) ; i++){
        if(search==arr[i]) {
            flag=true;
            printf("%d ",i);
            // break; // If 1st element is said to print
        }
    }
    if(flag==false ) printf("Not found");
}