#include <bits/stdc++.h>
using namespace std;

long long water(vector<long long> &arr, long long mid)
{
    long long water = 0;
    for (long long i = 0; i < arr.size(); i++)
    {
        if (mid >= arr[i])
        {
            water += (mid - arr[i]);
        }
    }

    return water;
}

void solve()
{
    // your code here
    long long n, x;
    cin >> n >> x;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = *max_element(arr.begin(), arr.end());

    long long low = 1;
    long long high = maxi + x;
    long long ans;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (water(arr, mid) <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << endl;
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