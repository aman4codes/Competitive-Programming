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
        string s;
        cin >> s;

        vector<int> parr;
        for (int j = 1; j <= n; j++)
            parr.push_back(j);

        vector<int> arr;

        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == '>')
            {
                auto it = max_element(parr.begin(), parr.end());
                arr.push_back(*it);
                parr.erase(it);
            }
            else
            {
                auto it = min_element(parr.begin(), parr.end());
                arr.push_back(*it);
                parr.erase(it);
            }
        }

        arr.push_back(parr[0]);

        reverse(arr.begin(), arr.end());

        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
