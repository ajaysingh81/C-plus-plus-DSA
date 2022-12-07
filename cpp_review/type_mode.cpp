#include<iostream>

using namespace std;

int main(){
    int i = 5;
    cout<<"i = " << i << endl;
    cout<< sizeof(i) <<endl;

    signed int j = 12;
    cout<< "j = " << j << endl;
    cout<< sizeof(j) <<endl;

    unsigned int k = 34;
    cout<<"k = " << k << endl;
    cout<< sizeof(k) <<endl;

    char a[10] = "ajay";
    signed char b[21] = "vijay";
    unsigned char c[5] = "ajay";

    cout<< a << endl ; cout<< b<<endl; cout<< c <<endl;


    return 0;

}