#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> y_cd(n);
    vector<int> x_cd(m);
    for (int i = 0; i < n; i++)
    {
        cin >> y_cd[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> x_cd[j];
    }

    int min_y=*min_element(y_cd.begin(),y_cd.end());
    int min_x=*min_element(x_cd.begin(),x_cd.end());

    if(x<min_x && y<min_y )
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<n+m<<endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}