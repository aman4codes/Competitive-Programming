#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if (s.find("...") != string::npos) 
        {
            cout<<2<<endl;
        } 
        else 
        {
            int dotCount = 0;
            for (char c : s) 
            {
                if (c == '.') dotCount++;
            }
            cout << dotCount << endl;

        }
    }
}