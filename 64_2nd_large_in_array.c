#include<stdio.h>
#include<limits.h>
int main (){
    int arr[]={9,9,6,5,4,3,6,3,4};
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i=0 ; i<sizeof(arr)/4 ;i++){
        if(max<arr[i]){
            smax=max; 
            max=arr[i];
        }
        else if (max>=arr[i] && arr[i]>smax){
            smax=arr[i];
        }
    }
    printf("Max=%d\nSmax=%d",max,smax);
}