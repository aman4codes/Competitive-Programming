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
        int count_2 = 0;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
            {
                count_2++;
            }
        }

        if (count_2 == 0)
        {
            cout << 1 << endl;
        }
        else if (count_2 % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            count_2/=2;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==2)
                {
                    count_2--;
                    if(count_2==0)
                    {
                        cout<<j+1<<endl;
                    }
                }
            }
        }
    }
}