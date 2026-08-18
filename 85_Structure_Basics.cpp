#include<iostream>
#include<string>
using namespace std;

// We use structure when different properties of different data types are needed

struct person{           // User defined data type --> person is a data type like int float!!
        string name;     // Attributes / properties
        int roll;  
        float cgpa;      // the name, role, cgpa are linked togather with this data type
    };
//  } person1;                    ---> U can also create like this  

void change(struct person* ); 

int main (){
    // struct person person1;     ---> U can also create like this  
    struct person *ptr;
    struct person person1;    //  ---> person1 is a variable of 'person' data type  
    ptr=&person1;

    // I'm showing three methods to call the structure elements :

    // 1 :
    cout<<"Enter Name : ";
    getline(cin, person1.name);  // this is valid only for variable name, like person1 is a variable
    // 2 :
    cout<<"Roll : ";
    cin>>(*ptr).roll;  // this method is valid only for pointers
    // 3 :
    cout<<"CGPA : ";
    cin>>ptr->cgpa;    // this method is valid only for pointers


    // A special feature of structure : 
    struct person person2;
    person2=person1;  // full copied!!   --> Deep copy

    // We can't compare structure like this : 
    // if(person1==person2) return 1;



    void display(struct person person1);
    display(person2);    //  --> pass by value



    // Another way to initialize : 
    struct person person3={"LOL LIFE",2108062}; // must be sequentially from first 
    person3.cgpa=4.00;


 
    change(&person3);      //   --> pass by reference
    cout<<"\n\nperson3.cgpa : "<<person3.cgpa;



    return 0;
}

void change(struct person* ptr){
    ptr->cgpa=3.00;
    
}

void display(struct person person2){
    cout<<"Showing Result : "<<endl;
    cout<<"Name : "<< person2.name<<endl;
    cout<<"Roll : "<< person2.roll<<endl;
    cout<<"CGPA : "<< person2.cgpa<<endl<<endl<<endl;
    return;
}