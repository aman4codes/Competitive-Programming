#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string str;
        cin >> n >> k;
        cin >> str;
        if (n == 2)
        {
            if (str[0] == str[1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (((n % 2) == 0))
            {
                if(k % 2 != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                cout << "NO" << endl;
                }
            }
            else
            {
                
            }
            
        }
    }
}