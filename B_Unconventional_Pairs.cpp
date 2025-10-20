#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    long long ans = LLONG_MIN;
    for (long long i = 0; i < n-1; i += 2)
    {
        long long temp = arr[i + 1] - arr[i];
        ans = max(temp, ans);
    }

    cout << ans << endl;
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