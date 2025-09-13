#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pref(n), suff(n);
    set<char> seen;

    for (int i = 0; i < n; i++)
    {
        seen.insert(s[i]);
        pref[i] = seen.size();
    }

    seen.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        seen.insert(s[i]);
        suff[i] = seen.size();
    }

    int maxi = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, pref[i] + suff[i + 1]);
    }

    cout << maxi << endl;
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
