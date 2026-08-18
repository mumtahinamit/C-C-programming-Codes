#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Enter a number : ";
    cin>>x;

    //Method 1 :

    // if(x%5==0 && x%3==0) cout<<"Divisible";
    // else cout<<"Not divisible";


    // Method 2 :

    // (x%5==0 && x%3==0) ? cout<<"Divisible" : cout<<"Not divisible";



    // Method 3 :
    
    // if(x%5==0){
    //     if(x%3==0) cout<<"\nDivisible";
    //     else cout<<"Not divisible";
    // }
    // else cout<<"Not divisible";
}