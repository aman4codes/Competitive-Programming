#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin >> s;
    int size = s.length();

    if (size <= 2 || size<=10) 
    {
        // Edge case: abbreviation doesn't make sense
        cout << s << endl;
    } 
    else 
    {
        cout << s[0] << size - 2 << s[size - 1] << endl;
    }
    }
}
