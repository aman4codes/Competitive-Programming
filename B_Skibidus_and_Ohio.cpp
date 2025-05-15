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
        int i = 0;

        while (i < s.length()-1) 
        { 
            if (s[i] == s[i + 1]) 
            {
                s.erase(i + 1, 1);
                if (i > 0) 
                {  
                    s[i] = s[i - 1];
                }
                i--;
            } 
            else 
            {
                i++; 
            }
        }

        cout << s.length() << endl;
    }
}
