#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<long long> ans_arr;
    long long rem_n = n;
    long long rem_b = b;
    long long rem_sum = s;
    bool flag = false;


    long long min_sum = k * b;
    long long max_sum = k * b + n * (k - 1);
    if (s < min_sum || s > max_sum)
    {
        cout << -1 << '\n';
        return;
    }

    ans_arr.push_back(k * b);
    rem_sum -= (k * b);
    rem_n -= 1;

    for (int i = 0; i < n && rem_sum > 0; i++)
    {
        long long add = min(rem_sum, k - 1);
        if (i < (int)ans_arr.size())
            ans_arr[i] += add;
        else
            ans_arr.push_back(add);
        rem_sum -= add;
    }

    while ((int)ans_arr.size() < n)
        ans_arr.push_back(0);

    for (long long l : ans_arr)
        cout << l << " ";
    cout << '\n';
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
