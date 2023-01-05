#include<bits/stdc++.h>

using namespace std;

// template with multiple parameter
template<class T,class U, class V = char>

class show{
    private:
    T x;
    U y;
    V z;
    public:
    show(T a, U b, V c){
        x = a;
        y = b; 
        z = c;
    }
    
    void display(){
        cout<< x << y << z << endl;
    }
};

int main()
{
    show<int,double> obj1(123 , 344.23, 'd');
    obj1.display();
    return 0;
}