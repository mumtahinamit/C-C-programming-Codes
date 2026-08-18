#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    // Index : 0 1 2 3 4 5 6 7 8  9 10 11 12  
    // Reversing entire array  :
    for (int i=0,j=(sizeof(arr)/4)-1 ; i<=j  ; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Printing 1st array : ");
    for (int i=0 ; i<sizeof(arr)/4 ; i++){
        printf("%d ",arr[i]);
    }

    printf("\n\n\n");
    int brr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    // Index : 0 1 2 3 4 5 6 7 8  9 10 11 12  
    // Reversing array from index 1 to 5 :
    for (int i=1,j=5 ; i<=j  ; i++,j--){
        int temp=brr[i];
        brr[i]=brr[j];
        brr[j]=temp;
    }
    printf("Printing 2nd array : ");
    for (int i=0 ; i<sizeof(brr)/4 ; i++){
        printf("%d ",brr[i]);
    }
}

/*

generalising this code by taking user input :

#include<stdio.h>
int main(){
    int a;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    // Reversing entire array  :
    for (int i=0,j=a-1 ; i<=j  ; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Printing 1st array : ");
    for (int i=0 ; i<sizeof(arr)/4 ; i++){
        printf("%d ",arr[i]);
    }

    printf("\n\n\n");
    int b;
    printf("Enter the element no. of an array : ");
    scanf("%d",&b);
    int brr[b];
    printf("Enter the elements : ");
    for (int i=0 ; i<b ; i++){
        scanf("%d",&brr[i]);
    }
    printf("Enter the 1st and last index to rotate : ");
    int first,last;
    scanf("%d %d",&first,&last);

    // Reversing array from index first to last :
    for (int i=first,j=last ; i<=j  ; i++,j--){
        int temp=brr[i];
        brr[i]=brr[j];
        brr[j]=temp;
    }
    printf("Printing 2nd array : ");
    for (int i=0 ; i<b ; i++){
        printf("%d ",brr[i]);
    }
}