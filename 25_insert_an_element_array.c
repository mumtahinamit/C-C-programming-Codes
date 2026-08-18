#include<stdio.h>
int main (){
    int arr[100],a,pos,new_element;
    printf("Enter no. of elements of the array : ");
    scanf("%d",&a);
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of new element : ");
    scanf("%d",&pos);
    pos=pos-1;
    printf("Enter the new element : ");
    scanf("%d",&new_element);
    for (int i=a; i>pos ; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=new_element;
    for (int i=0 ; i<a+1 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}