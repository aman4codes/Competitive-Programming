#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int even_count=0;
        int odd_count=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]%2==0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
            if(even_count==n)
            {
                cout<<"1"<<endl;
            }
            else if(odd_count==n)
            {
                cout<<n-1<<endl;
            }
            else
            {
                cout<<odd_count+1<<endl;
            }
    }
}