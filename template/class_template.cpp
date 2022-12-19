#include<bits/stdc++.h>

// #include<iostream>

using namespace std;

// class template 

template <class T>
class Number {
    private:
    // variable of type T
    T num;

    public:
    Number(T n) : num(n) {} // contructor

    T getNum(){
        return num;
    }

};

int main(){

    // create object with int type 

    Number<int> NumberInt(44);

    // create object with double type 
    Number<double> NumberdDouble(34.45);

    cout << "int Number is" << NumberInt.getNum() << endl;
    cout << "double Number is "<< NumberdDouble.getNum()<< endl;

    return 0;
}


