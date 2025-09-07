#include <bits/stdc++.h>
using namespace std;

pair<int, int> returnIndices(vector<int> &arr, int check)
{
    pair<int, int> ans = {0, 0};
    auto it = find(arr.begin(), arr.end(), check);
    int check_idx = it - arr.begin();

    for (int i = 0; i < check_idx; i++)
    {
        if (arr[i] < check)
        {
            ans.first = i + 1;
            break;
        }
    }

    for (int k = check_idx + 1; k < arr.size(); k++)
    {
        if (arr[k] < check)
        {
            ans.second = k + 1;
            break;
        }
    }

    return ans;
}

void solve()
{
    // your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> ans;
    vector<int> copy_arr = arr;

    sort(copy_arr.rbegin(), copy_arr.rend());

    bool check = true;
    for (int j = 0; j < n; j++)
    {
        ans = returnIndices(arr, copy_arr[j]);
        if (ans.first == 0 || ans.second == 0)
        {
            check = false;
            continue;
        }
        else if (ans.first != 0 && ans.second != 0)
        {
            cout << "YES" << endl;
            cout << ans.first << " " << (find(arr.begin(), arr.end(), copy_arr[j]) - arr.begin() + 1) << " " << ans.second << endl;
            check = true;
            break;
        }
    }

    if (!check)
        cout << "NO" << endl;
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