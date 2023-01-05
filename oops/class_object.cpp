#include<iostream>

using namespace std;
class animal
{
    public:
    void walk(){
        cout<< "animal is walkig "<<endl;
    }
    void speak();
};

// mathod which is outside the class
void animal :: speak(){
    cout<<"Animal is speaking"<<endl; 

}


int main(){
    animal obj1;
    obj1.walk();
    obj1.speak();
    return 0;
}