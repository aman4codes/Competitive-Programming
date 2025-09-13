#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n;
    cin >> n;
    vector<long long> even_arr;
    vector<long long> odd_arr;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x % 2 == 0)
        {
            even_arr.push_back(x);
        }
        else
        {
            odd_arr.push_back(x);
        }
    }

    long long sum = 0;
    if (!odd_arr.empty())
    {
        sort(odd_arr.rbegin(), odd_arr.rend());
        if (!even_arr.empty())
        {
            for (long long j = 0; j < even_arr.size(); j++)
            {
                sum += even_arr[j];
            }
        }
        if (odd_arr.size() >= 2)
        {
            for (int l = 0; l < ((odd_arr.size()+1) / 2 ); l++)
            {
                sum += odd_arr[l];
            }
        }
        else
        {
            sum += odd_arr[0];
        }
        cout << sum << endl;
    }
    else
    {
        cout << 0 << endl;
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