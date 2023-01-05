#include<iostream>

using namespace std;

struct person{
    string name;
    int id;
    float score;

}p1; // declare the variable alog with structure

int main(){

    person p; //  variable outside the structure i.e in main class
    
    cout<<"enter your name:"<<endl;
    getline(cin,p.name);
    cout<<"enter your id"<<endl;
    cin>>p.id;
    cout<<"Enter your score:"<<endl;
    cin>>p.score;

    cout<<"your name ,id , score :"<<endl;
    cout<<p.name<<", "<<p.id<<", "<<p.score<<endl;

    return 0;
}