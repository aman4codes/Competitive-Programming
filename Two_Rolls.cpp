#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int x, y;
    cin >> x >> y;
    int diff = 50 - x;
    if (diff % 2 == 0)
    {
        diff = diff / 2;
        if (diff >= y && diff <= (y + 5))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        diff = diff / 2;
        if (diff >= y && diff <= (y + 5))
        {
            if (diff + 1 >= y && diff + 1 <= (y + 5))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}