#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int w;
    cin>>w;
    int even_or_not=(w%2);
    if(even_or_not==0 && w!=2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}