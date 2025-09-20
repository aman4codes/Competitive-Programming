#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin >> n;
    int num = n - 1;
    int size = 2 * n;
    vector<int> temp(size, 0);
    temp[0] = n;
    temp[n] = n;
    if (n != 1)
    {
        for (int i = 1; i < n && num > 0; i++)
        {
            temp[i] = num;
            temp[size - i] = num;
            num--;
        }
    }

    for (int k : temp)
    {
        cout << k << " ";
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