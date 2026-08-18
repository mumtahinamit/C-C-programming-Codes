#include <stdio.h>
int main (){
    printf ("Enter any number : \n");
    int a;
    scanf("%d",&a);
    int num = a;
    int count = 0;
    while (a!=0){
        a=a/10;
        count++;
    }
    printf("No. of digits : %d\n",count);
    int arr[count];
    a=num;
    for (int i=count-1 ; i>=0 ; i--){
        arr[i]=a%10;
        a=a/10;
    }
    printf("Array elements : \n");
    for (int i=0 ; i<count ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int swap;
    for (int i=0 ; i<count ; i++){
        for (int j=0 ; j<count-1 ; j++){
            if (arr[j]<arr[j+1]) {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap; 
            }
        }
    }
    printf("Sorted number : \n");
    for (int i=0 ; i<count ; i++){
        printf("%d",arr[i]);
    }
        printf("\n\n\n\n%d",arr[count]);
    return 0;
} 