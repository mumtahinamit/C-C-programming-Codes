#include <stdio.h>
int main (){
    int a,b;
    printf("Enter the row & column : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){ 
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour input matrix is : \n");
    for (int i=0 ; i<a; i++){
        for (int j=0 ; j<b ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i=0 ; i<a; i++){
        for (int j=0 ; j<b ; j++){
            //Try this also : if ((i+j)==(b-1)) sum+=arr[i][j]; 
            if (j==(b-1-i)) sum+=arr[i][j];
        }
    }
    printf("Sum of minor diagonal elements: %d",sum);
    return 0;
}