// #include<iostream>
// using namespace std;
// int main (){
//     int num;
//     cout<<"Enter nth number : ";
//     cin>>num;
//     int fac=1;
//     for (int i=1 ; i<=num ; i++){
//         fac=fac*i;
//         cout<<"Factorial of "<<i<<" is : "<<fac<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter nth number : ";
    cin>>n;
    for (int j=1 ; j<=n ; j++){
        int fac=1;
        for (int i=1 ; i<=j ; i++){
            fac=fac*i;
        }
        cout<<"Factorial of "<<j<<" is : "<<fac<<endl;
    }
}


