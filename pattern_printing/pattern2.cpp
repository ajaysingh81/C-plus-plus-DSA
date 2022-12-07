//pattern2
/*
*
**
***
****
*****
 */


# include<iostream>

using namespace std;

int main()
{
    int i,j,k;

    cout<<"Enter a line :-  "<<endl;
    cin>>k;

    for(i = 1;i <= k; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<"*";

        }
    cout<<" "<<endl;
    }
 
    return 0;
}