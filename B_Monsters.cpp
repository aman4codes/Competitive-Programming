#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = x % k;
            // if (!x) x = k;
            arr.push_back(x);
        }

        vector<pair<int, int>> arr_pair;

        for (int j = 0; j < n; j++)
        {
            arr_pair.push_back({j, arr[j]});
        }

        sort(arr_pair.begin(), arr_pair.end(), [](pair<int, int> a, pair<int, int> b)
            {
                if (a.second != b.second)
                    return a.second < b.second;
                else
                    return a.first < b.first; 
            });

        for (auto p : arr_pair)
        {
            cout << p.first + 1 << " ";
        }
        cout << endl;
    }
}