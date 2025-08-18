#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }

        int counter=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=x && arr[j]<=y)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}