#include <bits/stdc++.h>
using namespace std;

int ceil_half(int a)
{
    return (a + 1) >> 1;
}

void solve()
{
    // your code here
    int n;
    cin >> n;

    vector<int> arr;
    int count_1=0;
    int count_minus_1=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            count_minus_1++;
        }
        else
        {
            count_1++;
        }
        arr.push_back(x);
    }

    int ans_count = 0;

    if (count_1 >= count_minus_1 && count_minus_1 % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if (count_1 >= count_minus_1 && count_minus_1 % 2 != 0)
    {
        cout << 1 << endl;
    }
    else if (count_1 < count_minus_1)
    {
        ans_count = ceil_half(n) - count_1;
        if ((n - ceil_half(n)) % 2 == 0)
        {
            cout << ans_count << endl;
            ;
        }
        else
        {
            cout << ceil_half(n) - count_1 + 1 << endl;
        }
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