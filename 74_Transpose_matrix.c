#include<stdio.h>
int main (){
    int arr[2][3]={   {1,2,3},
                      {4,5,6},
                                };

                    //  Showing matrix with index :

                    //     1      2      3
                    //   (0,0)  (0,1)  (0,2)
                    //     4      5      6
                    //   (1,0)  (1,1)  (1,2)
 
    //         1      4                1      4  
    //       (0,0)  (1,0)            (0,1)  (0,1)
    //         2      5                2      5
    //       (0,1)  (1,1)    --->    (1,0)  (1,1)
    //         3     6                 3      6
    //       (0,2)  (1,2)            (2,0)  (2,1)

    int transpose[3][2];

    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<3 ; j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for (int i=0 ; i<3 ; i++){ 
        for (int j=0 ; j<2 ; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}