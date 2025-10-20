#include <bits/stdc++.h>
using namespace std;

bool check_ugliness(vector<int> &arr)
{
    // reverse(arr.begin(), arr.end());
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int sum = 0;
        for (int j = i - 1; j >= 0; j++)
        {
            if (arr[i] != (sum + arr[j]))
            {
                sum += arr[j];
            }
            else
                return true;
        }

        return false;
    }
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

    if (check_ugliness(arr))
    {
        cout << "YES" << endl;
        sort(arr.rbegin(), arr.rend());
        for (int a : arr)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    else
    {
    }
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