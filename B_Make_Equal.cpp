#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    long long sum = accumulate(arr.begin(), arr.end(), 0LL);

    if (sum % n != 0)
    {
        cout << "NO\n";
        return;
    }

    int req_sum = sum / n;
    long long extra = 0;

    for (int i = 0; i < n; i++)
    {
        extra += arr[i] - req_sum;

        if (extra < 0)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
}
