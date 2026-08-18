#include<stdio.h>
int main (){
    int n;
    printf("Enter nth term : \n");
    scanf("%d",&n);
    printf("Prime numbers : \n");
    for (int i=2 ; i<=n ; i++){
        int count =0;
        for (int j=2 ;j<i ; j++ ){
            if (i%j==0){
                count = 1;
                break;
            }
        }
        if (count == 0) printf("%d ",i);
    }
    return 0;
}