#include<stdio.h>
int main (){
    int a,count=0;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a  ; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0 ; i<a ; i++){
        for (int j=i+1 ; j<a ; j++){
            if (arr[i]==arr[j]) {
                count++;
                break;
            }
        }
    }
    printf("duplicate element no. : %d",count);
    return 0;
}