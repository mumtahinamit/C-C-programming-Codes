#include<stdio.h>
int main (){

    //Initializing all matrices :

    int a,b,c,d;
    printf("Enter the row and column no. of 1st matrix : ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the row and column no. of 2nd matrix : ");
    scanf("%d %d",&c,&d);
    int brr[c][d];
    int add[a][b];
    int sub[a][b];
    int mul[a][d];
    printf("Enter the elements : ");
    for (int i=0 ; i<c ; i++){
        for (int j=0 ; j<d ; j++){
            scanf("%d",&brr[i][j]);
        }
    }

    //Addition & substraction :

    if (a==c && b==d){
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<b ; j++){
                add[i][j]=arr[i][j]+brr[i][j];
                sub[i][j]=arr[i][j]-brr[i][j];
            }
        }
        printf("Addition matrix :\n");
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<b ; j++){
                printf("%d ",add[i][j]);
            } 
            printf("\n");
        }

        printf("\n");

        printf("Substraction matrix : \n");
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<b ; j++){
                printf("%d ",sub[i][j]);
            } 
            printf("\n");
        }
    }
    printf("\n");

    //multiplication :

    if (b==c){
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<d ; j++){
                mul[i][j]=0;
                for (int k=0 ; k<b ; k++){
                    mul[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
        printf("Multiplication matrix : \n");
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<d ; j++){
                printf("%d ",mul[i][j]);
            } 
            printf("\n");
        }
    }
    return 0;
}