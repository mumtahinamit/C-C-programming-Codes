#include<stdio.h>
int main (){

    int a,b,multiplier;
    printf("Enter the row and column no. of a matrix : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the multiplier : ");
    scanf("%d",&multiplier);
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            arr[i][j]=multiplier*arr[i][j];
        }
    }
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}