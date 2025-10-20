#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int s_length = s.length();
        if(s.front()==s.back())
        {
            cout<<s<<endl;
        }
        else
        {
            s.front()=s.back();
            cout<<s<<endl;
        }
    }
}