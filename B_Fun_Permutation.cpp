#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n;
    cin >> n;
    vector<int> ans;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long sum = n + 1;

    for (long long j = 0; j < n; j++)
    {
        ans.push_back(sum - arr[j]);
    }

    for (long long k : ans)
    {
        cout << k << " ";
    }
    cout << endl;
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