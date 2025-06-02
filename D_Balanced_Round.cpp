#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n); 

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 1;
        int temp = 1;

        sort(arr.begin(), arr.end());

        for (int j = 1; j < n; j++)
        {
            int diff = arr[j] - arr[j - 1];
            if (diff <= k)
            {
                count++;
            }
            else
            {
                temp = max(temp, count);
                count = 1;
            }
        }

        temp = max(temp, count);

        cout << (n - temp) << endl;
    }

    return 0;
}
