#include <bits/stdc++.h>
using namespace std;

void countMoves(string &s, int &moves)
{
    for (size_t j = 0; j + 1 < s.size(); ++j)
    {
        if ((s[j] == '0' && s[j + 1] == '1') || (s[j] == '1' && s[j + 1] == '0'))
        {
            moves++;
            s.erase(j, 2);
            countMoves(s, moves);
            return;
        }
    }
}

void solve()
{
    string s;
    cin >> s;
    int moves = 0;
    countMoves(s, moves);
    cout << (moves % 2 == 1 ? "DA\n" : "NET\n"); // odd = Alice wins
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