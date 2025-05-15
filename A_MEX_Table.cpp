#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                for (int k = 0; k <= (n * (m - 1)); k++)
                {
                    arr[i][j] = k;
                }
            }
        }
    }
}