#include <bits/stdc++.h>
using namespace std;

void check_prefix(int *arr, int n)
{
    int freq[n] = {0};
    bool check = false;
    for (int k = 1; k <= n; k++)
    {
        if (arr[k] % 2 != 0)
        {
            freq[arr[k]]++;
        }
    }

    for (int j = 1; j <= n; j++)
    {
        if (j % 2 != 0 && freq[j] % 2 != 0)
        {
            check = true;
        }
        else
        {
            check = false;
        }
    }

    if (!check)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        check_prefix(arr, n);
    }
}