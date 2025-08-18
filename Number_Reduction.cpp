#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int check=x%3;
        if(x!=3 && check!=0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }
}