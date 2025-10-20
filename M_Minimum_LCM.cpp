#include <bits/stdc++.h>
using namespace std;

vector<long long> printFactors(long long n)
{
    vector<long long> factors;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (i != n / i)
                factors.push_back(n / i);
        }
    }

    sort(factors.begin(), factors.end());

    return factors;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> factors = printFactors(n);
    int size = factors.size();

    if (factors[size - 2] == 1)
    {
        cout << 1 << " " << n-1 << endl;
    }
    else
    {
        cout << factors[size - 2] << " " << n - factors[size - 2] << endl;
    }
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