#include<iostream>
using namespace std;
int main (){
    int number;
    cout<<"Enter any number : ";
    cin>>number;
    if(99<number && number<1000) cout<<"3 digit number ";
    else cout<<"Not a 3 digit number ";
}