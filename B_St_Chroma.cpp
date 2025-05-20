#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x >= n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for(int j=0; j<n ;j++)
            {
                if(x!=j)
                {
                    cout<<j<<" ";
                }
            }
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}