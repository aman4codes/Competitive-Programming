#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        vector<int> a;
        vector<int> b;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        for (int m = 0; m < n; m++)
        {
            if(b[m]!=-1)
            {
                int temp=a[m]+b[m];
            }
        }
    }
}