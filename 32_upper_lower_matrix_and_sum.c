#include<stdio.h>
int main (){
    int a,b;
    printf("Enter the row and column no. of the matrix : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your input matrix : \n");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int if_upper=0 ;
    int if_lower=0 ;
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            if (i>j && arr[i][j]!=0) if_upper=1;
            if (i<j && arr[i][j]!=0) if_lower=1;
        }
    }
    if (if_upper==0) {
        printf("Upper triangular matrix \n");
        int sum_upper=0;
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<b ; j++){
                if (i<=j) sum_upper+=arr[i][j];
            }
        }
        printf("Sum of upper triangular matrix : %d\n",sum_upper);
    }
    else printf("Not an upper triangular matrix \n");
    if (if_lower==0){
        printf("Lower triangular matrix \n");
        int sum_lower=0;
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<b ; j++){
                if (i>=j) sum_lower+=arr[i][j];
            }
        }
        printf("Sum of lower triangular matrix : %d",sum_lower);
    }
    else printf("Not a lower triangular matrix \n");
    return 0;
}