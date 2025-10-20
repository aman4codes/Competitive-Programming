#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min_diff = INT_MAX;
        pair<int, int> idx = {0, 0};

        if (!is_sorted(arr.begin(), arr.end()))
        {
            cout << 0 << endl;
        }
        else
        {
            for (int j = 0; j < n - 1; j++)
            {
                int curr_diff = arr[j + 1] - arr[j];
                if (curr_diff < min_diff)
                {
                    min_diff = curr_diff;
                    idx.first = j;
                    idx.second = (j + 1);
                }
            }


            int diff = arr[idx.second] - arr[idx.first];
            int ans = ((diff / 2) + 1);

            cout << ans << endl;
        }
    }
}