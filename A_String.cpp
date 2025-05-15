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
        int size = s.length();
        int sum = 0;
        for (int i = 0; i < size ; i++)
        {
            if (s[i] == '1')
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}