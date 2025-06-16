#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> str(n);
        int j=0;
        int k=0;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            if(str[i]==0)
            {
                j++;
                k=max(j,k);
            }
            else
            {
                j=0;
            }
        }
        cout<<k<<endl;
    }
}