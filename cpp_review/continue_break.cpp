#include<iostream>

using namespace std;

int main()
{
    int n,i ;
    cin>>n;
    // if n is divisible by 3 not print

    for(i=1;i<=n;i++){
        
        if(i%3==0){
            continue;
           
        }
        cout<<i<<endl;
    }            
            
}