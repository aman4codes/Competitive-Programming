#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n,a,b,c;
        cin>>n>>a>>b>>c;
        float sum=(n*((a+(2*b)+c)/2));
        if(sum>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}