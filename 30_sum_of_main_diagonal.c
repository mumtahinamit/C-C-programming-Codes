#include<stdio.h>
int main (){

    int a,b;
    printf("Enter the row and column no. of a matrix : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    printf("Sum of main diagonal : %d",sum);
    
    return 0;
}