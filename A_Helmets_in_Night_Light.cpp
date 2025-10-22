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

    sort(people_share.begin(), people_share.end(),
         [](auto &a, auto &b)
         {
             return a.second < b.second;
         });

    long long total_cost = p;
    long long rem = n - 1;

    for (int i = 0; i < n && rem > 0; i++)
    {
        long long can_share = people_share[i].first;
        long long cost_per_share = people_share[i].second;

        long long take = min(can_share, rem);
        long long effective_cost = min(cost_per_share, p);

        total_cost += take * effective_cost;
        rem -= take;
    }

    cout << total_cost << endl;
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
