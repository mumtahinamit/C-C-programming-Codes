#include <stdio.h>
int reverse(int a,int arr[a]){
    for (int i=0 ; i<(a/2) ; i++){
        int temp=arr[i];
        arr[i]=arr[a-1-i];
        arr[a-1-i]=temp;
    }
    return arr[a];
}
int main (){
    int a;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Reverse array : \n");
    arr[a] = reverse(a,arr);
    for (int i=0 ; i<a ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}