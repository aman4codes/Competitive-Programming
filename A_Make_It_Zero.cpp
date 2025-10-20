#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int totalXor = 0;
    for (int x : a)
        totalXor ^= x;

    if (totalXor == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }

    int prefixXor = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefixXor ^= a[i];
        if (prefixXor == totalXor)
        {
            cout << 2 << endl;
            cout << 1 << " " << (i + 1) << endl;
            cout << (i + 2) << " " << n << endl;
            return;
        }
    }

    cout << 2 << "\n";
    cout << 1 << " " << (n - 1) << endl;
    cout << n << " " << n << endl;
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
}
