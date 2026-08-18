#include<stdio.h>
int main (){
    int a,max,min;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a  ; i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for (int i=0 ; i<a ; i++){
        if (max<arr[i]) max=arr[i];
        if (min>arr[i]) min=arr[i];
    }
    printf("Max : %d \nMin : %d",max,min);

//Finding 2nd maximum element : 

    int max2=min; //or take int max2=INT_MIN; with #include<limits.h>
//Not taking max2=arr[0] bcoz arr[0] element can be maximum
//then max2 will come to be max2=max which isn't true
    for (int i=0 ; i<a ; i++){
        if (max!=arr[i]){
            if(max2<arr[i]) max2=arr[i];
        }
    }
    printf("\n2nd Max : %d",max2);
    return 0;
}