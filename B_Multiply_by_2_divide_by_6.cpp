#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = 0, b = 0;
        long long temp = n;

        while (temp % 2 == 0)
        {
            temp /= 2;
            a++;
        }

        while (temp % 3 == 0)
        {
            temp /= 3;
            b++;
        }

        if (temp != 1 || a > b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2*b -a << endl;
        }
    }
}
