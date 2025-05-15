#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        bool found = false;
        cin >> n;
        cin>>s;
        // for (int j = 0; j < n; j++)
        // {
        //     cin >> s[j];
        // }
        for (int i = 0; i < n - 3; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u' && (i + 1) < n)
                {
                    if (s[i + 2] != 'a' && s[i + 2] != 'e' && s[i + 2] != 'i' && s[i + 2] != 'o' && s[i + 2] != 'u' && (i + 2) < n)
                    {
                        if (s[i + 3] != 'a' && s[i + 3] != 'e' && s[i + 3] != 'i' && s[i + 3] != 'o' && s[i + 3] != 'u' && (i + 3) < n)
                        {
                            cout << "NO" << endl;
                            found = true;
                            break;
                        }
                    }
                }
            }
        }
        if (!found)
        {
            cout << "YES" << endl;
        }
    }
}