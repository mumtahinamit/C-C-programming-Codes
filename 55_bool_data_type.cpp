#include <iostream>
using namespace std;
int main (){
    bool x;
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    if(a>b) x = true;
    else x = false;
    cout<<"The value of x : "<<x<<endl;  // True = 1, False = 0 
    if(x==0) cout<<a<<" is greatest";
    else cout<<b<<" is greatest";
    
}