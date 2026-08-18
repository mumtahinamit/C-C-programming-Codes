#include<iostream>
using namespace std;
int main(){
    int x=3;
    printf("Guess Answer : %d\n",x=10);
    int a=5;
    printf("Guess Answer : %d\n",a++);
    int b=3;
    printf("Guess Answer : %d\n",++b);
    int c=4;
    printf("Guess Answer : %d\n",c==4);
    int d=15;
    printf("Guess Answer : %d %d %d\n",d!=15,d=50,d<30);
    char ch='A';
    int y=65;
    if (ch==y) printf("LOL\n");
    else printf("OOPS");
    int p=4;
    int q=p---2;
    printf("Guess Answer : %d %d\n",p,q);
    int e=6;
    int f=--e-2;
    printf("Guess Answer : %d %d\n",e,f);

}