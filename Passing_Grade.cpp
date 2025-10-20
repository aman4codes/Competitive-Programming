#include <bits/stdc++.h>
using namespace std;

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
    int cutoff = arr[0];
    int count = 0;

    for (int k = 0; k < n; k++)
    {

        if (arr[k] >= cutoff)
        {
            count++;
        }
    }
    cout << count << endl;
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