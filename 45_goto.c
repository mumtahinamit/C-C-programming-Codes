#include<stdio.h>
#include<math.h>
int main (){
    int a,count=0;
    printf("Enter a number : \n");
    maza:
    scanf("%d",&a);
    if (a<0){
        goto maza;
    }
    int y=sqrt(a);
    printf("x= %d\ny= %d\n",a,y);
    count+=1;
    if (count<=2){
        goto maza;
    }
    return 0;
}