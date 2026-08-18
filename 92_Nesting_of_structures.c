#include<stdio.h>
#include<string.h>
struct person{
    char name[20];
    int id;
    float salary;
//  struct person x;  -->  not allowed as structure is not defined yet
};

struct headperson {
    char badge;
    struct person x; //There can be another class in a particular class
};

int main(){
    struct headperson a;
    // Here we can say that : 
    // person is a class
    // a is the object
    strcpy(a.x.name,"Mumtahin");
    a.x.id=2108022;
    a.x.salary=120000.5;
    a.badge='A';
    printf("Name : %s\n",a.x.name);
    printf("ID : %d\n",a.x.id);
    printf("Salary : %.2f\n",a.x.salary);
    printf("Badge : %c",a.badge);
}