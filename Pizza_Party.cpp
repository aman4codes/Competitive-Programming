#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    int total_slice=((a+1)*4+(b*3));
    if(total_slice%8 ==0)
    {
        cout<<total_slice/8<<endl;
    }
    else
    {
        cout<<((total_slice/8) +1)<<endl;
    }
}