#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        unordered_map<char, int> freq;
        for (char ch : s)
        {
            freq[ch]++;
        }

        int odd_count = 0;
        for (auto &pair : freq)
        {
            if (pair.second % 2 != 0)
                odd_count++;
        }

        // Can we delete k characters such that at most 1 odd remains?
        if (k <= n - 1 && k >= (odd_count - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
