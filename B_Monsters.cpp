#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> monsters;


        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            int rem = x % k;
            if (rem == 0)
                rem = k;

            monsters.push_back({rem, i + 1});
        }

        sort(monsters.begin(), monsters.end(), [&](auto &a, auto &b)
             {
            if (a.first == b.first) return a.second < b.second;
            return a.first > b.first; });

        for (auto &p : monsters)
            cout << p.second << " ";
        cout << "\n";
    }
}
