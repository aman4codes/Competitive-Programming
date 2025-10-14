#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin>>n;
    if(n>=2)
    {
        for (int i = 1; i < n; i++)
        {
            if (i % 2 != 0)
            {
                cout << "I hate that" << " ";
            }
            else
            {
                cout<<"I love that"<<" ";
            }
        }
    }

    if(n%2==0)
    {
        cout<<"I love it"<<" ";
    }
    else
    {
        cout<<"I hate it"<<" ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}