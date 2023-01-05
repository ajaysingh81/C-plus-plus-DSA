#include<iostream>

using namespace std;

class mathematics
{
private:
    int a;
    float b;
public:
    mathematics(int x,float y);   // constructor
    ~mathematics();  // destructor 
    int sum();
    // int sum(){
    // int sum = a+b;
    // return sum;
    // }
};

mathematics::mathematics(int x,float y)
{
    a = x;
    b = y;
}

mathematics::~mathematics()
{
}

int mathematics :: sum(){
    int sum = a+b;
    return sum;
}

int main(){
    int result;
    mathematics res(34,543);
    result = res.sum();
    cout<<"Result is :"<<result<<endl;
    return 0;
}