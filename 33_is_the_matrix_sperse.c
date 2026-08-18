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
    printf("\nInput matrix : \n");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int count = 0 ;
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            if (arr[i][j]==0) count++;
        }
    }
    if (count > ( (a*b) /2) ) printf("Sperse");
    else printf("Not sperse");
   
    return 0;
}