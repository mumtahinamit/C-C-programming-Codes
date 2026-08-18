// Search an element in the array and printing kth index : 
#include<stdio.h>
int main(){
    printf("Enter element no. in the array : ");
    int a;
    scanf("%d",&a);
    int arr[a],brr[a];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element : ");
    int search;
    scanf("%d",&search);
    printf("Enter value of k : ");
    int k;
    scanf("%d",&k);
    printf("Printing %dth index : ",k);
    int count=-1;
    for (int i=0 ; i<a ; i++){
        if(search==arr[i]) {
            count++;
            brr[count]=i;
        }
    }
    if( count<k-1 ) printf("Not found\n");
    else {
        printf("%d\n",brr[k-1]);
    }
    if(count>-1) {
        printf("Printing first index : %d\n",brr[0]);
        printf("Printing final index : %d",brr[count]);
    }

}