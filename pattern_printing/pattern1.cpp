// pattern printing this type
// ******
// *****
// ***
// **
// *


#include<iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout<< "enter the the line:- "<<endl;
    cin>>n;
    
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<""<<endl;
     
    }
    return 0;
}