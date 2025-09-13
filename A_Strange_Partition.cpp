#include <bits/stdc++.h>
using namespace std;

long long ceil_div(long long a, long long b)
{
    return (a + b - 1) / b;
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
    long long sum_not_divides = 0;

    long long sum_divides = 0;

    for (long long u = 0; u < n; u++)
    {
        if (arr[u] % x == 0)
        {
            sum_divides += arr[u];
        }
        else if (arr[u] % x != 0)
        {
            sum_not_divides += arr[u];
        }
    }

    long long temp_sum = sum_not_divides + sum_divides;

    long long min_sum = ceil_div(temp_sum, x);

    long long max_sum = 0;

    for (long long q = 0; q < n; q++)
    {
        max_sum += ceil_div(arr[q], x);
    }

    cout << min_sum << " " << max_sum << endl;
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