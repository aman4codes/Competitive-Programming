#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;
    cin>>num;
    bool flag=false;
    while(num>0)
    {
        if(num%10==4 || num%10==7)
        {
            flag=true;
            num=num/10;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}