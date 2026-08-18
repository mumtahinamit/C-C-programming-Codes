// Find sum of rectangle from (0,1) to (2,2)
#include<stdio.h>
#include<limits.h>
int main (){
    int sum=0;
    int arr[4][3]={   {1,2,3},
                      {2,3,4},
                      {3,4,5},
                      {5,6,7}
                                };
    for (int i=0 ; i<3 ; i++){
        for (int j=1 ; j<3 ; j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum : %d",sum);
    
}