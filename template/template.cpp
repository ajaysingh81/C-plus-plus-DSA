#include<bits/stdc++.h>

using namespace std;

template <class T>  

class add{
    private:
    T x ,y;
    public:
    add(T a,T b){
        x =a;
        y = b;
    }

    T sum(){
        return x + y;
    }
};

int main(){
    add <int> sum(34,34);
    int res = sum.sum();
    cout<< "result :- "<< res << endl;
    return 0;
}