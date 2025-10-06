#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    string str;

    int rem = r % (b + 1);
    int r_in_gap = r / (b + 1);

    int check = 1;

    while (r > 0 && b > 0)
    {
        if (check <= r_in_gap + (rem > 0))
        {
            cout << 'R';
            r--;
            check++;
        }
        else
        {
            cout << 'B';
            b--;
            check = 1;
            if (rem > 0)
                rem--;
        }
    }

    while (r > 0)
    {
        cout << 'R';
        r--;
    }

    cout << endl;
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
