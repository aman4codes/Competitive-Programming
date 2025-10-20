#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int min_ab = min(a, b);

        a -= min_ab;
        b -= min_ab;

        if (a > c)
        {
            cout << "First" << endl;
        }
        else if (b > c)
        {
            cout << "Second" << endl;
        }
        else
        {
            if (a != 0)
            {
                c -= a;
                if (c % 2 == 0)
                {
                    cout << "Second" << endl;
                }
                else
                {
                    cout << "First" << endl;
                }
            }
            else
            {
                c -= b;
                if (c % 2 == 0)
                {
                    cout << "Second" << endl;
                }
                else
                {
                    cout << "First" << endl;
                }
            }
        }
    }
}