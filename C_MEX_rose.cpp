#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int count_miss = 0;
    int count_k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    vector<bool> present(k, false);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < k)
        {
            present[arr[i]] = true;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (!present[i])
            count_miss++;
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] <= k)
        {
            if (arr[j] == k)
            {
                count_k++;
            }
        }
        else
        {
            break;
        }
    }

    cout << max(count_k, count_miss) << endl;
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