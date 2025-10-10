#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> arr(3);

    for (int i = 0; i <= 2; i++)
    {
        cin >> arr[i];
    }

    int maxi = *max_element(arr.begin(), arr.end());

    if (maxi == ((arr[0] + arr[1] + arr[2]) - maxi))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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