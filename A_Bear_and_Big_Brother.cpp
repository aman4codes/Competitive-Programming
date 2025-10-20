#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int a,b;
    cin>>a>>b;
    int i=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        i++;
    }

    cout<<i<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}