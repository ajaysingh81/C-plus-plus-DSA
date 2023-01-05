#include<bits/stdc++.h>

using namespace std;
// template class
template <class T = int , class U = string>
class show{
    private:
    T n;
    U c;
    public:
    show(T x, U y){
        n = x;
        c = y;
    }
    void display(){
    cout<< "Integer value is :"<<n <<endl;
    cout<< "char is string is :" <<c <<" ";
    cout<<endl;
   }

};



int main(){ 
    // object creation of default tempate
    show<> obj1(234,"ajay");
    obj1.display();
    
    cout<<"after changing the patameter"<<endl;

    // you can change the manually your defualt parameter 
    show<float, int> obj2(234.234, 3554);
    obj2.display();
    
    return 0;
}