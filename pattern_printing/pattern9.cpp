#include<iostream>

using namespace std;

int main()
{
    int n ;
    int count = 0 ;

    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            count += 1;
            cout<<count<<" ";
        }
        cout<<endl;
    }





}