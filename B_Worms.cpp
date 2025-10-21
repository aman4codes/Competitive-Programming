#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    vector<int> arr_m(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr_m[i];
    }

    vector<pair<pair<int, int>, int>> labels;
    int sum_slow = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            sum_slow += arr[i - 1];

        sum += arr[i];
        labels.push_back({{sum_slow, sum}, i + 1});
    }

    for (int i = 0; i < m; i++)
    {
        int low = 0;
        int high = labels.size() - 1;
        while (high >= low)
        {
            int mid = low + (high - low) / 2;

            if (arr_m[i] >= labels[mid].first.first && arr_m[i] <= labels[mid].first.second)
            {
                cout << labels[mid].second << endl;
                break;
            }
            else if (arr_m[i] < labels[mid].first.first)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}