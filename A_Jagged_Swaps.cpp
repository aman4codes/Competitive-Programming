#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> copy_arr = arr;
        sort(copy_arr.begin(), copy_arr.end());
        bool changed;
        do 
        {
            changed = false;
            for (int j = 1; j < n - 1; j++) 
            {
                if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) 
                {
                    swap(arr[j], arr[j + 1]);
                    changed = true;
                }
            }
        } while (changed);
        if (copy_arr == arr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}