#include<stdio.h>


void pass_by_value(int arr[],int x){
    arr[0]=100;
    x=100;
}


void pass_by_reference(int* z, int* crr){
    // printf("The size of array : %d\n",sizeof(crr)/sizeof(crr[0])); --> Wrong!!
    // When you pass an array to a function, it decays to a pointer to the first element.
    // Therefore, the sizeof operator on the array inside the function will not give you the total size of the array, but the size of the pointer.
    // However, you can calculate the size of the array by passing its size as an additional parameter to the function
    crr[0]=4;
    crr[1]=5;
    crr[2]=6;
    *z=32;
    return ;
}


int main (){
    int arr[1]={5};
    int x=5;
    printf("Pass by value : \n\n\n");
    printf("Initially :  \nx : %d   \narr[0] : %d\n",x,arr[0]);
    pass_by_value(arr,x);
    // arr and x are formal parameters 
    // their values are called actual parameters 
    printf("After calling function :\nx : %d\narr[0] : %d",x,arr[0]);

    // variable -> pass by value
    // array -> pass by value is used as pass by reference in array

    // Now we will see how pass by reference work : 

    int brr[]={1,2,3};
    int y=8;
    printf("\n\n\nPass by refernce : \n\n\n");
    printf("Initially :  \ny : %d\n",y);
    printf("brr[0] : %d\nbrr[1] : %d\nbrr[2] : %d\n\n\n",brr[0],brr[1],brr[2]);
    pass_by_reference(&y,brr);
    printf("After calling function : \ny : %d\n",y);
    printf("brr[0] : %d\nbrr[1] : %d\nbrr[2] : %d\n\n\n",brr[0],brr[1],brr[2]);

    return 0;
}

