// calculator

#include<iostream>

using namespace std;


int main()
{
    float a ,b, c  ;
    int op;
    cout<<"Enter a first no.  = " ;   cin>>a;
    cout<<"Enter a first no.  ="  ;   cin>>b;

    cout<<"for a result select operator --> 1. + , 2. -,3. / ,4.*" << endl;
    cin>>op;
    switch(op){
        case 1:
            c = a+b;
            cout<<c;
            break;

        case 2:
            c = a-b;
            cout<<c;
            break;

        case 3:
            c = a/b;
            cout<<c;
            break;
        
        case 4:
            c = a*b;
            cout<<c;
            break;

        default:
            cout<<"invalid oprator";        
    }
    return c;
}