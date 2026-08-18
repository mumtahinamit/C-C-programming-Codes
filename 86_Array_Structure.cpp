#include<iostream>
#include<string>
using namespace std;

struct person{
        string name;
        int roll;
        float cgpa;
    };

int main (){
    int no;
    cout<<"Enter student no. : ";
    cin>>no;
    getchar();
    struct person person[no];
    for (int i=1 ; i<=no ; i++){
        person[i].roll=i;
        cout<<"Student "<<i<<" : "<<endl;
        cout<<"Enter Name : ";
        getline(cin,person[i].name);
        cout<<"Enter CGPA : ";
        cin>>person[i].cgpa;
        getchar();

    }
    cout<<"Enter the roll no. : ";
    int targetroll;
    cin>>targetroll;
    for (int i=1 ; i<=no ; i++){
        if(person[i].roll==targetroll){
        cout<<"Data of roll "<<i<<" : \n";
        cout<<"Name : "<<person[i].name<<endl;
        cout<<"CGPA : "<<person[i].cgpa;
        }

    }
    

    return 0;
}
