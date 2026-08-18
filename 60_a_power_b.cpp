#include<iostream>
using namespace std;
int main (){
    cout<<"Enter base : ";
    int a;
    cin>>a;
    int temp=1;
    cout<<"Enter power : ";
    int b;
    cin>>b;
    for (int i=1 ; i<=b; i++){
        temp=temp*a;
    }
    cout<<a<<" to the power "<<b<<" is : "<<temp;
}