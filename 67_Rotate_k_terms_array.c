#include<stdio.h>

void reverse (int arr[] , int first, int last){
    for (int i=first,j=last ; i<=j  ; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main(){

    int a;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k to rotate : ");
    int k;
    scanf("%d",&k);
    k=k%a;

    // Rotate upto k terms :

    reverse (arr,0,a-1);
    reverse (arr,0,k-1);
    reverse (arr,k,a-1);
    printf("Printing array : ");
    for (int i=0 ; i<a ; i++){
        printf("%d ",arr[i]);
    }
}