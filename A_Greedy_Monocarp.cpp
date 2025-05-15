#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int sum = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());

        for (int j = 0; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                cout << "0" << endl;
                break;
            }
            else if (sum > k)
            {
                cout << k - (accumulate(arr.begin(), arr.begin() + (j - 1), 0)) << endl;
                break;
            }
        }
    }
}