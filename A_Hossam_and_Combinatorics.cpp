#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n;
    cin >> n;
    vector<long long> arr(n);
    unordered_map<long long, long long> freq;
    long long maxi = -1;
    long long mini = INT_MAX;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    long long maxi_freq = 0;
    ;
    long long mini_freq = 0;
    ;
    for (auto p : freq)
    {
        if (p.first == maxi)
        {
            maxi_freq = p.second;
        }

        if (p.first == mini)
        {
            mini_freq = p.second;
        }
    }

    if (maxi == mini)
    {
        cout << n * (n - 1) << endl;
    }
    else
    {
        cout << mini_freq * maxi_freq * 2 << endl;
    }
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