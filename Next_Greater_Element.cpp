#include <bits/stdc++.h>
using namespace std;

vector<int> nxtGreaterArray(vector<int> &arr)
{
    vector<int> ans(arr.size());
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        ans[st.top()] = -1;
        st.pop();
    }
    return ans;
}

void solve()
{
    // your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = nxtGreaterArray(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << arr[i] << " " << ans[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}