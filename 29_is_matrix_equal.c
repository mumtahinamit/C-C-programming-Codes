#include<stdio.h>
int main (){

    //Initializing all matrices :

    int a,b,c,d;
    printf("Enter the row and column no. of 1st matrix : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements :");
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the row and column no. of 2nd matrix : ");
    scanf("%d%d",&c,&d);
    int brr[c][d];
    printf("Enter the elements : ");
    for (int i=0 ; i<c ; i++){
        for (int j=0 ; j<d ; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int count=0;
    if (a==c && b==d){
        for (int i=0 ; i<a ; i++){
            for (int j=0 ; j<b ; j++){
                if (arr[i][j]!=brr[i][j]) {
                    count=1;
                    break;
                }
            }
        }
        if (count==0) printf("Equal");
        else printf("Not equal");
    }
    else printf("Not equal");
    return 0;
}