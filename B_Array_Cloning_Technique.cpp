#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int element = -1;

    for (auto &p : freq)
    {
        if (p.second > maxFreq)
        {
            maxFreq = p.second;
            element = p.first;
        }
    }

    bool allSame = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            allSame = false;
            break;
        }
    }

    int rem_size = n - maxFreq;
    int ans = rem_size;
    int i = 0;
    if (!allSame)
    {
        while (true)
        {
            maxFreq *= 2;
            i++;
            if (maxFreq >= n)
            {
                break;
            }
        }

        cout << ans + i << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}