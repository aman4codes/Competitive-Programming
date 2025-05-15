#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        if(m>=a && m>=b)
        {
            if(((2*m)-(a+b))>=c)
            {
                cout<<a+b+c<<endl;
            }
            else
            {
                cout<<a+b+((2*m)-(a+b))<<endl;
            }    
        }
        else if(m>=a && m<b)
        {
            if(((2*m)-(a+m))<c)
            {
                cout<<a+m+((2*m)-(a+m))<<endl;
            }
            else
            {
                cout<<a+m+c<<endl;
            }
        }
        else if(m<a && m>=b)
        {
            if(((2*m)-(m+b))<c)
            {
                cout<<m+b+((2*m)-(m+b))<<endl;
            }
            else
            {
                cout<<m+b+c<<endl;
            }
        }
        else
        {
            cout<<m+m<<endl;
        }
    }
}