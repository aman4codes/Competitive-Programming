#include <bits/stdc++.h>
using namespace std;

bool already_sorted(vector<int> &arr)
{
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] <= arr[j - 1])
            return false;
    }
    return true;
}

void no_of_operation(vector<int> arr, int n)
{
    int counter = 0;
    for (int i = n - 1; i > 0; i--)
    {
        while(arr[i-1] >= arr[i])
        {
            if (arr[i-1] == 0)
            {
                cout << -1 << endl;
                return;
            }
            arr[i-1] /= 2;
            counter++;
        }
    }
    if (already_sorted(arr))
        cout << counter << endl;
    else
        cout << -1 << endl;
}

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

        if (already_sorted(arr))
            cout << 0 << endl;
        else
            no_of_operation(arr, n);
    }
}
