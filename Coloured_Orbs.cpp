#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int r, b;
    cin >> r >> b;
    int common=min(r,b);
    int skill=common*5;
    r-=common;
    b-=common;
    skill+=(r);
    skill+=(b*2);
    cout<<skill<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}