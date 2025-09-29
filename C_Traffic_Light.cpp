#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    string t = s + s;

    int ans = 0;
    int nextG = -1; 

    for (int i = 2 * n - 1; i >= 0; --i)
    {
        if (t[i] == 'g')
        {
            nextG = i;
        }
        if (i < n && s[i] == c && nextG != -1)
        {
            ans = max(ans, nextG - i);
        }
    }

    cout << ans << '\n';
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
