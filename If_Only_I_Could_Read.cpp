#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    bool check = true;

    for (int j = 1; j < n; j++)
    {
        if (arr[j-1] > arr[j])
        {
            cout << j << " " << j+1 << endl;
            check = true;
            break;
        }
        else
        {
            check = false;
        }
    }

    if (!check)
    {
        cout << "-1" << endl;
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