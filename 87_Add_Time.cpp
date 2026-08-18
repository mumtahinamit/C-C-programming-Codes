#include<iostream>
using namespace std;

struct Time{
    int hour;
    int minute;
}time1,time2;

int main (){
    cout<<"First time :\n";
    cout<<"Enter hour : ";
    cin>>time1.hour;
    cout<<"Enter minute : ";
    cin>>time1.minute;
    cout<<"Second time :\n";
    cout<<"Enter hour : ";
    cin>>time2.hour;
    cout<<"Enter minute : ";
    cin>>time2.minute;
    struct Time result;
    struct Time Add(struct Time time1,struct Time time2);
    result=Add(time1,time2);
    void display(struct Time result);
    display(result);
    return 0;
}

struct Time Add(struct Time t1,struct Time t2){
    struct Time result;
    result.minute=t1.minute+t2.minute;
    result.hour=t1.hour+t2.hour+result.minute/60;
    result.minute%=60;
    return result;

}

void display(struct Time result){
    cout<<"Time : "<<result.hour<<" Hour "<<result.minute<<" Minute";
    return;
}