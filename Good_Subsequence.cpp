#include <bits/stdc++.h>
using namespace std;

int longestAlternatingSubsequence(vector<int>& v) {
    vector<int> bestSub, currentSub;

    for (int start = 0; start < 2; start++) { // try both even-start and odd-start
        currentSub.clear();
        int expectedParity = start; // 0 = even, 1 = odd

        for (int x : v) {
            if (x % 2 == expectedParity) {
                currentSub.push_back(x);
                expectedParity = 1 - expectedParity; // flip parity
            }
        }

        if (currentSub.size() > bestSub.size()) {
            bestSub = currentSub;
        }
    }

    return bestSub.size();
}

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

        int max = -1;

        int ans=longestAlternatingSubsequence(arr);
        
        cout<<longestAlternatingSubsequence(arr)<<endl;;


    }
}