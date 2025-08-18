#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, n;
        cin >> x >> n;
        int rem = n % 4;
        if (x % 2 == 0)
        {

            if (rem == 0)
            {
                cout << x << endl;
            }
            else if (rem == 1)
            {
                cout << x - n << endl;
            }
            else if (rem == 2)
            {
                cout << x + 1 << endl;
            }
            else if (rem == 3)
            {
                cout << x + n + 1 << endl;
            }
        }
        else
        {
            if (rem == 0)
            {
                cout << x << endl;
            }
            else if (rem == 1)
            {
                cout << x + n << endl;
            }
            else if (rem == 2)
            {
                cout << x - 1 << endl;
            }
            else if (rem == 3)
            {
                cout << x - n - 1 << endl;
            }
        }
    }
}