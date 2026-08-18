#include<stdio.h>
int main (){
    // Initializing arrays : 
    printf("Enter the row and column no. of matrix : ");
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Enter the elements :\n");
    
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //        minc :                maxc :
    // minr :   1      2      3       4                                         
    //        (0,0)  (0,1)  (0,2)   (0,3)   
    //          5      6      7       8                                                 
    //        (1,0)  (1,1)  (1,2)   (1,3)        
    //          9      10     11      12                                                               
    // maxr : (2,0)  (2,1)  (2,2)   (2,3)           
    
    printf("\n");
    int total_elements = a*b;
    int count = 0;
    int minr = 0, maxr = a-1, minc = 0, maxc = b-1; 

    while(count<=total_elements){
        for (int j=minc ; j<=maxc && count<total_elements ; j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++; 
        for (int i=minr ; i<=maxr && count<total_elements ; i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--; 
        for (int j=maxc ; j>=minc && count<total_elements; j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--; 
        for (int i=maxr ; i>=minr && count<total_elements ; i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++; 
    }


}