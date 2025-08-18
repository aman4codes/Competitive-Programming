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
            int y;
            cin >> y;
            arr_b.push_back(y);
        }

        int diff = 0;

        for (int k = 0; k < n; k++)
        {
            if (arr_a[k] > arr_b[k])
            {

                diff = diff + (arr_a[k] - arr_b[k]);
            }
        }

        cout << diff + 1 << endl;
    }
}