#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    vector<pair<long long, long long>> updates(q);
    for (long long i = 0; i < q; i++)
    {
        long long p, X;
        cin >> p >> X;
        // store 1-based index and new value
        updates[i] = {p, X};
        // optionally apply immediately:
        // A[p-1] = X;  // if you want to apply the update
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << min(arr[n - 1], (max(arr[n - 2], arr[n - 3]))) << endl;
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