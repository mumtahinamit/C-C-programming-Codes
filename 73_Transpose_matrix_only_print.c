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
 
    //      We will print like  :     1      4
    //                              (0,0)  (1,0)
    //                                2      5
    //                              (0,1)  (1,1)
    //                                3     6
    //                              (0,2)  (1,2)

    for (int i=0 ; i<3 ; i++){ // transpose matrix has 3 rows 
        for (int j=0 ; j<2 ; j++){ // ,,      ,,    ,, 2 columns
            printf("%d ",arr[j][i]);
        }
        printf("\n");
        
    }
    
    
}