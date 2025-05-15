#include <bits/stdc++.h>

using namespace std;

int getMaxStreak(vector<int> &arr)
{
    int n = arr.size();
    int maxStreak = 1, streak = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            streak++;
        }
        else
        {
            streak = 1;
        }
        maxStreak = max(maxStreak, streak);
    }

    return maxStreak;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxStreak = getMaxStreak(arr);

        // Try modifying each element and check for max streak
        for (int i = 0; i < n; i++)
        {
            int original = arr[i];
            arr[i] *= x;
            maxStreak = max(maxStreak, getMaxStreak(arr));
            arr[i] = original; // Restore original value
        }

        cout << maxStreak << endl;
    }

    return 0;
}
