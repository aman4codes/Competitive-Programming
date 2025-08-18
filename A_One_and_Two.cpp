#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,j;
        cin >> n;

        int count1 = 0;
        int count2 = 0;

        bool flag=true;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        int check=0;
        if (count2 % 2 == 0)
        {
            for ( j = 0; j < n; j++)
            {
                if(arr[j]==2)
                {
                    if(check<(count2/2) && flag)
                    {
                        check++;
                    }
                    else
                    {
                        flag=false;
                    }
                }
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }

        if(!flag)
        {
            cout<<j<<endl;
        }
    }
}