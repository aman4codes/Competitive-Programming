#include <bits/stdc++.h>
using namespace std;

vector<long long> factors(long long n)
{
    vector<long long> ans;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i != n / i)
                ans.push_back(n / i);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> factor = factors(n);
    long long ans = 0;

    for (long long f : factor)
    {
        long long max_sum_for_f = LLONG_MIN;
        long long min_sum_for_f = LLONG_MAX;

        for (long long i = 0; i < n; i += f)
        {
            long long sum = 0;
            for (long long j = i; j < i + f; j++)
                sum += arr[j];

            max_sum_for_f = max(max_sum_for_f, sum);
            min_sum_for_f = min(min_sum_for_f, sum);
        }

        ans = max(ans, max_sum_for_f - min_sum_for_f);
    }

    cout << ans << '\n';
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