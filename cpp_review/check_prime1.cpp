#include <iostream>

using namespace std;

int main()
{
    int i, j, min, max;
    cout << "min" << endl;
    cin >> min;
    cout << "max" << endl;
    cin >> max;
    cout<<"\n";
    cout<<"Prime no is "<<endl;
    for (i = min; i <= max; i++)
    {
        for (j = 2; j < i; j++)
        {
            if(i%j==0){
                break;
            }
        
        }
        if(j==i)
        cout<<i<<endl;
    }
    return 0;
}