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
    printf("Your input matrix is : \n");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int count=0 ;
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            if (i==j && arr[i][j]!=1 ) count=1;
            if (i!=j && arr[i][j]!=0) count=1;
            //you can use else if also 
        }
    }
    if(count==0) printf("Identity Matrix");
    else printf("Not an identity matrix");
    return 0;
}