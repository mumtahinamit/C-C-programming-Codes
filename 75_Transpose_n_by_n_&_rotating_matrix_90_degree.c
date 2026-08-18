#include<stdio.h>
int main (){
    printf("Enter the value of n for n by n square matrix : ");
    int n;
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements : \n");
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //                            MIRROR [1 5 9 diagonal acing like mirror]
    /*                                \                         */
    //    1      2      3               [1]     4      7                                                 
    //  (0,0)  (0,1)  (0,2)            (0,0)  (0,1)  (0,2)
    //    4      5      6                2     [5]     8                                    
    //  (1,0)  (1,1)  (1,2)            (1,0)  (1,1)  (1,2) 
    //    7      8      9                3      6     [9]                                                   
    //  (2,0)  (2,1)  (2,2)            (2,0)  (2,1)  (2,2) 

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            if(i<j) {
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    printf("\nTranspose Matrix : \n");
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n/2 ; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }

    printf("\nRotating matrix by 90 degree : \n");
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}