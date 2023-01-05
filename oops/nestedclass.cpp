#include <iostream>

using namespace std;
class dog{
    public:
    void walk(){
        cout<<"dog is walkig"<<endl;
        cout<<"outer class"<<endl;
    }
    class bark{
        public:
        void speak(){
            cout<<"dog is barking"<<endl;
            cout<<"inside class"<<endl;
        }
        void inner();
    };
    
};

// outside definig the inner mathod

void dog :: bark :: inner(){
    cout<<"This is inner funtion which is define outside the class"<<endl;
}

int main(){
    dog d;   // object creation of outer class
    d.walk();
    dog :: bark b;  // object creation of inner class
    b.speak();
    b.inner();
    return 0;
}