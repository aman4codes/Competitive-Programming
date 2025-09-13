#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int mat[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> mat[i][j];
        }
    }

    int point = 0;
    for (int k = n - 1; k > 0; k--)
    {
        int min_diff = abs(mat[k][0] - mat[k - 1][0]);
        int point_diff = abs(mat[k][1] - mat[k - 1][1]);

        if (point_diff == 1)
        {
            if (min_diff % 2 != 0)
            {
                point += min_diff;
            }
            else
            {
                point += (min_diff - 1);
            }
        }
        else
        {
            if (min_diff % 2 == 0)
            {
                point += min_diff;
            }
            else
            {
                point += (min_diff - 1);
            }
        }
    }

    if (mat[0][0] != 0)
    {
        if (mat[0][1] == 1)
        {
            if (mat[0][0] % 2 != 0)
            {
                point += mat[0][0];
            }
            else
            {
                point += (mat[0][0] - 1);
            }
        }
        else
        {
            if (mat[0][0] % 2 == 0)
            {
                point += mat[0][0];
            }
            else
            {
                point += (mat[0][0] - 1);
            }
        }
    }

    if (m - mat[n - 1][0] != 0)
    {
        point += m - mat[n - 1][0];
    }

    cout << point << endl;
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
