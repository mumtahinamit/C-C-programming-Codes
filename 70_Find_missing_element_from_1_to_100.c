// Given an array containing elements from 1 to 100
// except one element in the range is missing
// find the missing element 
#include<stdio.h>
int main (){
    int arr[99];
    for (int i=0 ; i<100 ; i++){
        arr[i]=i+1;
    }
    arr[57]=100;
    int sum=0;
    for (int i=0 ; i<99 ; i++){
        sum+=arr[i];
    }
    printf("Missing element : %d",((100*101)/2)-sum);
}