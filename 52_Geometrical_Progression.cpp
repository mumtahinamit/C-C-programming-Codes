#include <iostream>
using namespace std;
int main (){
    int nth_term;
    cout<<"Enter nth term : ";
    cin>>nth_term;
    int first_term;
    cout<<"Enter 1st term : ";
    cin>>first_term;
    int multiplier;
    cout<<"Enter multiplier : ";
    cin>>multiplier;
    cout<<"Geometrical Progression :\n";
    for (int i=0 ; i<nth_term ; i++){
    cout<<first_term<<" ";
        first_term *=multiplier; 
    }
    
}