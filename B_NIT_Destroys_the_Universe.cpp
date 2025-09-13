#include <bits/stdc++.h>
using namespace std;

int countNonZeroSegments(const vector<int> &arr)
{
    int count = 0;
    int n = arr.size();
    int i = 0;

    while (i < n)
    {
        if (arr[i] != 0)
        {
            count++;
            while (i < n && arr[i] != 0)
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    return count;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count_0 = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            count_0++;
        }
    }

    if (count_0 == n)
    {
        cout << 0 << endl;
    }
    else if (count_0 == 0 || countNonZeroSegments(arr) == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout<<2<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
