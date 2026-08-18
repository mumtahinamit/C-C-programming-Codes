// Find sum of rectangle from (0,1) to (2,2)
#include<stdio.h>
#include<limits.h>
int main (){
    int maxsum=INT_MIN;
    int row;
    int arr[4][3]={   {1,2,3},
                      {2,3,4},
                      {3,4,5},
                      {5,6,7}
                                };
    for (int i=0 ; i<4 ; i++){
        int sum=0;
        for (int j=0 ; j<3 ; j++){
            sum+=arr[i][j];
        }
        if (sum>maxsum) maxsum=sum;
        row=i+1;
    }
    printf("Max sum : %d\nAt row no. : %d",maxsum,row);
    
}