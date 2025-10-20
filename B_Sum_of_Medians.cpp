#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n, k;
    cin >> n >> k;
    long long size = n * k;
    vector<long long> arr(size);
    for (long long i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());


    long long choose = n / 2;
    long long limit = 0;
    long long max_median = 0;


    for (long long i = 1; i <= size; i++)
    {
        if (i % (choose + 1) == 0)
        {
            if (limit < k)
            {
                max_median += arr[i-1];
                limit++;
            }
        }
    }

    cout << max_median << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}