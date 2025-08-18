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

        vector<int> new_arr;
        new_arr.push_back(arr[0]);

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                new_arr.push_back(1);  // insert 1 before arr[i]
            }
            new_arr.push_back(arr[i]);
        }

        cout << new_arr.size() << endl;
        for (int val : new_arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
