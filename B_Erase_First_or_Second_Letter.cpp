#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int size;
    cin >> size;
    string str;
    cin >> str;
    vector<int> freq(26, 0);
    int distinct = 0;
    long long ans = 1;

    for (int i = 0; i < size; i++)
    {
        int idx = str[i] - 'a';
        if (freq[idx] == 0)
            distinct++;
        freq[idx]++;

        ans += distinct;
    }

    cout << ans - 1 << endl;
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