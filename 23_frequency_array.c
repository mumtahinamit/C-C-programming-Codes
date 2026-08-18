#include<stdio.h>
int main (){
    int a,count=0;
    printf("Enter the element no. of an array : ");
    scanf("%d",&a);
    int arr[a];
    int freq[a];
    printf("Enter the elements : ");
    for (int i=0 ; i<a  ; i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for (int i=0 ; i<a ; i++){
         if (freq[i]!=0){
              count=1;
              for (int  j=i+1 ; j<a ; j++){
                  if (arr[i]==arr[j]) {
                      freq[j]=0;
                      count++;
                    }
              }
              printf("Frequency of %d : %d \n",arr[i],count);
          }
    }
    return 0;
}