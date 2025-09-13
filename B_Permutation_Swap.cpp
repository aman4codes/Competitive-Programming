#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}

int gcdArray(const vector<int> &arr)
{
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ans = gcd(ans, arr[i]);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    auto it=*max_element(arr.begin(),arr.end());

    // build diff array properly
    vector<int> diff_arr(n);
    for (int j = 1; j <= n; j++)
        diff_arr[j - 1] = abs(j - arr[j - 1]);

    // frequency map
    vector<int> freq(it);
    for (int x : diff_arr)
        freq[x]++;

    cout << gcdArray(diff_arr) << endl;
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
