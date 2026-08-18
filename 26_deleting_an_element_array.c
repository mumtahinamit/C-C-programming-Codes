#include<stdio.h>
int main (){
    int arr[100],a,pos;
    printf("Enter no. of elements of the array : ");
    scanf("%d",&a);
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of delating element : ");
    scanf("%d",&pos);
    pos=pos-1;
    for (int i=pos; i<a-1 ; i++){
        arr[i]=arr[i+1];
    }
    for (int i=0; i<a-1 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}