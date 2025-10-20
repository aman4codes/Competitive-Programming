#include <bits/stdc++.h>
using namespace std;

long long cost_to_group(const string &s, char c)
{
    vector<long long> pos;
    int n = s.size();
    for (int i = 0; i < n; ++i)
        if (s[i] == c)
            pos.push_back(i);
    int m = pos.size();
    if (m <= 1)
        return 0;

    vector<long long> b(m);
    for (int i = 0; i < m; ++i)
        b[i] = pos[i] - i;
    long long med = b[m / 2];
    long long cost = 0;
    for (int i = 0; i < m; ++i)
        cost += abs(b[i] - med);
    return cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        long long ans = min(cost_to_group(s, 'a'), cost_to_group(s, 'b'));
        cout << ans << '\n';
    }
    return 0;
}
