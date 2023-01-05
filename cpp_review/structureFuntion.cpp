#include<iostream>

using namespace std;

struct detail{
    string name;
    string add;
};

detail getdata(detail);
void displayData(detail);

int main(){
    detail temp,d;
    temp = getdata(d);
    d = temp;
    displayData(d);
    

    return 0;
}

detail getdata(detail d){
    cout<<"Enter your name :"<<endl;
    getline(cin,d.name);
    cout<<"Enter your address:"<<endl;
    getline(cin,d.add);
    
    return d;

}

void displayData(detail d){
    cout<<"your name is:"<<d.name<<", your add is; "<<d.add<<endl;
}