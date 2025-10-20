#include <bits/stdc++.h>
using namespace std;

int solve(string s, string target)
{
    int n = s.size();
    int deletions = 0;
    int pos = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == target[1])
        {
            pos = i;
            break;
        }
        deletions++;
    }
    if (pos == -1)
        return INT_MAX;

    for (int i = pos - 1; i >= 0; i--)
    {
        if (s[i] == target[0])
        {
            return deletions + (pos - 1 - i);
        }
    }
    return INT_MAX;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<string> targets = {"00", "25", "50", "75"};
        int ans = INT_MAX;

        for (auto &target : targets)
        {
            ans = min(ans, solve(s, target));
        }

        if (ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}
