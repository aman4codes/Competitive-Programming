#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        if (s.length() >= 2)
        {
        s.erase(s.length() - 2, 2);
        }

        
        s.push_back('i');
        cout << s<<endl;
    }
}