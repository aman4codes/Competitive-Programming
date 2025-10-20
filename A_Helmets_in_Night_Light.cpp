#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, p;
    cin >> n >> p;
    vector<pair<long long, long long>> people_share(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> people_share[i].first;
    }

    for (long long j = 0; j < n; j++)
    {
        cin >> people_share[j].second;
    }

    long long total_cost = 1LL * n * p;
    long long actual_cost = p;
    sort(people_share.begin(), people_share.end(),
         [](auto &a, auto &b)
         {
             return a.second < b.second;
         });

    long long covered = 1;
    long long l = 0;
    while (covered < n && l < n)
    {
        long long need = n - covered;
        long long take = min(1LL * people_share[l].first, need);

        actual_cost += take * 1LL * people_share[l].second;
        covered += take;
        l++;
    }

    cout << min(actual_cost, total_cost) << "\n";
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
