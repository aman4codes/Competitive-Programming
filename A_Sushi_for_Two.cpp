#include <bits/stdc++.h>
using namespace std;

bool check_seq(const vector<int> &arr, int mid)
{
    int n = arr.size();
    vector<int> runs;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            runs.push_back(count);
            count = 1;
        }
    }
    runs.push_back(count);

    for (int i = 1; i < (int)runs.size(); i++)
    {
        if (runs[i - 1] >= mid && runs[i] >= mid)
            return true;
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 1, high = n / 2, ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check_seq(arr, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << 2 * ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
