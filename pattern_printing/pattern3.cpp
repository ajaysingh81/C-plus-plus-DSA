// pattern3

/*
******
*    *
*    *
******
*/

#include <iostream>

using namespace std;

int main()
{
    int i, j, lineNumber;

    cout << "Enter A roows:-" << endl;
    cin >> lineNumber;
    cout << "" << endl;

    for (i = 1; i <= lineNumber; i++)
    {
        for (j = 1; j <= 2*lineNumber; j++)
        {
           if(i==1||i==lineNumber)
           {
            cout<<"*";
           }
           else if(j==1||j==2*lineNumber)
           {
            cout<<"*";
           }
           else{
            cout<<" ";
           }
        }
        cout << "" << endl;

       
    }
    return 0;
}
