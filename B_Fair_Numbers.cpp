#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> each_no(ll n)
{
    vector<int> factor;
    while (n > 0)
    {
        int d = n % 10;
        if (d != 0)
            factor.push_back(d);
        n /= 10;
    }
    return factor;
}

void solve()
{
    ll n;
    cin >> n;

    int i = 0;
    vector<int> trial = each_no(n);

    while (true)
    {
        if (trial.empty())
        {
            n++;
            trial = each_no(n);
            i = 0;
            continue;
        }

        if (i < trial.size() && n % trial[i] == 0)
        {
            if (i == trial.size() - 1)
            {
                cout << n << "\n";
                return;
            }
            i++;
        }
        else
        {
            n++;
            trial = each_no(n);
            i = 0;
        }
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
