#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<char>> matrix(8, vector<char>(8));

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < 8; i++)
    {
        bool allR = true;
        for (int j = 0; j < 8; j++)
        {
            if (matrix[i][j] != 'R')
            {
                allR = false;
                break;
            }
        }
        if (allR)
        {
            cout << "R\n";
            return;
        }
    }

    cout << "B\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
