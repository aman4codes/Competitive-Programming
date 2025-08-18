#include <bits/stdc++.h>
using namespace std;

int mex_finder(vector<int> &arr)
{
    bool check = true;
    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            return arr[i - 1] + 1;
        }
        else
        {
            check = false;
        }
    }

    if (!check)
    {
        return arr[arr.size() - 1] + 1;
    }
}

bool check_mex(vector<int>& arr)
{
    bool check = true;
    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            check=true;
        }
        else
        {
            check = false;
        }
    }

    if (!check)
    {
        return true;;
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
        vector<int> arr_a;
        vector<int> arr_b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr_a.push_back(x);
        }

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr_b.push_back(x);
        }

        if(check_mex(arr_a))
        {
            for (int l = 0; l < n; l++)
            {
                if(arr_a[l]!=arr_b[l])
                {
                    swap(arr_a[l],arr_b[l]);
                }
            }
        }

    }
}