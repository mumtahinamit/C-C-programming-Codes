#include<stdio.h>
int main (){
    int a,pos,new_element;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to enter new element : ");
    scanf("%d",&pos);
    printf("Enter the element : ");
    scanf("%d",&new_element);
    arr[pos-1]=new_element;
    for (int i=0 ; i<a  ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}