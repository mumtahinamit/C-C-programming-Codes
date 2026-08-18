#include<stdio.h>
int main (){
    int x=4,y=0;
    while (x>=0){
        x--;
        y++;
        if(x==y) continue;
        else printf("x = %d  y = %d\n",x,y);
    }

    //printing odd numbers from one to ten : 
    printf("Odd numbers from one to ten :\n");
    for (int i=1 ; i<=10 ; i++){
        if (i%2==0) continue;
        printf("%d ",i);
    }
}