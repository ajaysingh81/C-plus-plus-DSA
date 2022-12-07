#include<iostream>
#include<conio.h>
using namespace std;
int fun1(int );
int main()
{
    int x =6;
    fun1(x);

}
int fun1(int n)
{
    int i = 0;
    if(n>1)
    fun1( n-1);
    for (i =0; i < n; i++)
    cout << "*";
    cout<< "\n";
}