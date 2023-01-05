
#include<bits/stdc++.h>

using namespace std;

class student{
private:
    string name;
    int rollno;
    
public:
    student(string n,int r){
        name = n;
        rollno = r;
    }
    void printData(){
        cout<< "Name : "<<name<<endl;
        cout<< "Roll Number : "<<rollno<< endl;
    }
};


int main(){
    int r ;
    string n;
    cout<<"Enter your name; "<<endl;
    cin>> n;
    cout<<" Enter yor rollnumber: "<<endl;
    cin>> r;
    // student s1("ajay",234);
    student s1(n,r);
    s1.printData();
    return 0;
}