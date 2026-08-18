#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    // 0 1 1 2 3 5 8 13 
    int n;
    cout<<"Enter nth term : ";
    cin>>n;
    cout<<"Fibonacci Series : ";
    int temp;
    for (int i=0 ; i<n ; i++){
        cout<<a<<" ";
        temp=a;
        a=b;
        b=b+temp;
    }
}