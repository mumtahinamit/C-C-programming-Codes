#include <stdio.h>
int fac(int x){
    int fac=1;
    for (int i=2 ; i<=x; i++){
        fac*=i;
    }
    return fac;
}
int main (){
    printf("Enter the value of n : ");
    int n;
    scanf("%d",&n);
    printf("Enter the value of r : ");
    int r;
    scanf("%d",&r);
    int nfact=fac(n),rfact=fac(r),nrfact=fac(n-r);
    int result = nfact / ( rfact * nrfact);
    printf("nCr : %d",result);

    return 0;
}