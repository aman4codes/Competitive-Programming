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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        unordered_map<int, int> freq;

        for (int x : arr)
            freq[x]++;

        int mostFreqElement = arr[0];
        int maxCount = 0;

        for (auto &p : freq)
        {
            if (p.second > maxCount || (p.second == maxCount && p.first < mostFreqElement))
            {
                maxCount = p.second;
                mostFreqElement = p.first;
            }
        }

        if(mostFreqElement==1)
        {
            cout<<n-maxCount<<endl;
        }
        else
        {
            cout<<n-maxCount+1<<endl;
        }
    }
}