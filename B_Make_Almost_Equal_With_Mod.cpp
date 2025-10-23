#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    bool check = false;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long ans = 2;
    bool flag = true;
    while (flag == true)
    {
        for (long long i = 0; i < n - 1; i++)
        {
            if (arr[i] % ans == arr[i + 1] % ans)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans *= 2;
    }
    cout << ans << endl;

    // checking purpose
    // for (long long i = 0; i < n; i++)
    // {
    //     arr[i] %= ans;
    // }
    // for (long long k : arr)
    // {
    //     cout << k << " ";
    // }
    // cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}