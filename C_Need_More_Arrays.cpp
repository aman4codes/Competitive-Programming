#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]<=(a[j-1]+1) && j>1)
            {
                a.erase(a.begin()+j);
            }
        }
        
    }
}