#include <stdio.h>
int maximum(int a,int arr[a]){
    int max=arr[0];
    for (int i=0 ; i<a ; i++){
        if (max<arr[i]) max=arr[i];
    }
    return max;
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
    printf("Maximum element of an array : ");
    int max = maximum(a,arr);
    printf("Max= %d",max);
    return 0;
}