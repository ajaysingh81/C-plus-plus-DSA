#include<bits/stdc++.h>

using namespace std;

template<class T>
class sum{
    private:
    T num1;
    T num2;
    public:
    sum(T y, T x){
        num1 = x;
        num2 = y;
    }
    T add(T b);

};
// funtion defining outsite the class template

template<class T>
T sum<T> :: add(T b){
    T s = num1 + num2 +b;
    return s;
}

int main(){
    sum<int> res(23,43);
    int result;
    result = res.add(45);
    cout<< "Result is: "<< result<<endl;

    return 0;

}