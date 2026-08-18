#include<stdio.h> 

//  Pascal triangle : 

//  Triangle pattern printing : 

/*                        0       1       2       3       4       5
                                               
1                         0     0C0                                    
                                                                                
1   1                     1     1C0      1C1                                                       
                                                                             
1   2   1                 2     2C0      2C1      2C2                                                               
                                                                  
1   3   3   1             3     3C0      3C1      3C2     3C3                                                                        
                                                                
1   4   6   4   1         4     4C0      4C1      4C2     4C3     4C4                                                     


*/

// nC(r+1) = nCr * (n-r)/(r+1)
// iC(j+1) = iCj * (i-j)/(j+1)
// iC(j+1) = 1   * (i-j)/(j+1)

int main (){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++ ){
        int first = 1;
        for (int j=0 ; j<i+1 ; j++){
            printf("%d  ",first);  
            first = first * (i-j) / (j+1);
        }
        printf("\n");
    }
}