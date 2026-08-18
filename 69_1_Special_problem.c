// Ques : Find total no. of pairs (3 pair) in the array
// whose sum is equal to the given value x.

#include<stdio.h>
int main (){
    int a;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the array elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the required value : ");
    int value;
    scanf("%d",&value);
    int count=0;
    printf("Pair : \n");
    for(int i=0 ; i<a ; i++){
        for (int j=i+1 ; j<a ; j++ ){
            for (int k=j+1 ; k<a ; k++){
                if (arr[i] + arr[j] + arr[k] == value){
                    printf("(%d,%d,%d) \n",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\nPair no. : %d",count);

}