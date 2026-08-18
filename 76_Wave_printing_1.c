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
    //                               Printing like : 

    //    1      2      3            ----------------->                                      
    //  (0,0)  (0,1)  (0,2)                           |
    //    4      5      6            <-----------------                    
    //  (1,0)  (1,1)  (1,2)          | 
    //    7      8      9            ----------------->                                                  
    //  (2,0)  (2,1)  (2,2)            
    
    printf("\n");
    for (int i=0 ; i<a ; i++){
        if (i%2==0){
            for (int j=0 ; j<b ; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else {
            for (int j=b-1 ; j>=0 ; j--){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }


}