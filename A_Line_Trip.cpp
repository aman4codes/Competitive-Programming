#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        
        vector<int> arr;
        arr.push_back(0); // starting from 0
        
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        
        int last_gap = x - arr.back();
        arr.push_back(x + last_gap); // add virtual station at x + (x - last gas station)
        
        int max_gap = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            int diff = arr[i] - arr[i - 1];
            max_gap = max(max_gap, diff);
        }
        
        cout << max_gap << endl;
    }
}
