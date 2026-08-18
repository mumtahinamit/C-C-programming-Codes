#include<iostream> 
using namespace std;

int main (){
    string name;
    cin >> name;
    cout << name;
    cout << "Enter a year : \n" <<endl;
    int a;
    cin >> a;
    (  (a%400==0)  ||  ((a%4==0) && (a%100!=0))  ) ? printf("\nLEAP") : printf("\nNOT LEAP") ;
    return 0;
}