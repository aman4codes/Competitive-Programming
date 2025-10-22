#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr_n(n);
    vector<int> arr_q(q);

    for (int i = 0; i < n; i++)
    {
        cin >> arr_n[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> arr_q[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x = arr_q[i];
        bool already_done = false;
        for (int k = 0; k < i; k++)
        {
            if (arr_q[k] == x)
            { 
                already_done = true;
                break;
            }
        }
        if (already_done)
            continue;

        for (int j = 0; j < n; j++)
        {
            if (arr_n[j] % (1 << x) == 0)
                arr_n[j] += (1 << (x - 1));
        }
    }

    for (int a : arr_n)
    {
        cout << a << " ";
    }
    cout << "\n";
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