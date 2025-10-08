#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            check = true;
    }

    if (check)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}