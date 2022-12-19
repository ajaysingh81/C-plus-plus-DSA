#include<bits/stdc++.h>

using namespace std;

// declatring the function template
// template <typename T> 
// returnType FunctionName (T Parameter1, T parameter2)

// calling a funtion 

// funtionName <datatype> (parameter, parameter);


// declare the funtion
template <typename T>
T add(T a,T b){
    T s = a + b;
    return s;
}

int main()
{

    int res = add<int>(23,45);  // <int>funtion calling 
    float resu = add<float>(23.4,23.3);  

    cout<< "Result :  " << res << endl;
    cout<< "Result1 : " <<resu <<endl;
    return 0;
}






