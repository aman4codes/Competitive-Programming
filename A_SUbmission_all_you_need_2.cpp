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
        vector<int> arr;
        int cnt_1 = 0;
        int cnt_0 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                cnt_1++;
            }
            else
            {
                cnt_0++;
            }
            arr.push_back(x);
        }

        sort(arr.begin(),arr.end());
        int pair_of_0_1 = min(cnt_1, cnt_0);

        int sum = 2 * pair_of_0_1;

        for (int j = 2 * pair_of_0_1; j < n; j++)
        {
            sum += arr[j];
        }
        cout<<sum<<endl;
    }
}