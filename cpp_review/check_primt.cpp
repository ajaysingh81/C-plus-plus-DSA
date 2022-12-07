#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    // check prime or not

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime" << endl;
            break;
        }
    }
    if (i == n)
        cout << "prime no." << endl;

    return 0;
}