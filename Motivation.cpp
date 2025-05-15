#include <bits/stdc++.h>
using namespace std;
const int N=1e+5;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
        vector <int> max_rating;
	    cin>>n>>x;
	    int size[n];
	    int rating[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>size[i]>>rating[i];
	    }
	    for(int j=0;j<n;j++)
        {
            if(size[j]<=x)
            {   
                
                max_rating.push_back(rating[j]);
            }
        }
        sort(max_rating.begin(),max_rating.end());
        int num=max_rating.size();     
        cout<<max_rating[num-1]<<endl;
	}
}