#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;
    int ans = 0;

    while (i <= j)
    {
        int team_power = arr[j];
        int need = (d / team_power) + 1;
        if (i + (need - 1) <= j)
        {
            ans++;
            i += (need - 1);
        }
        else
        {
            break;
        }
        j--;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
