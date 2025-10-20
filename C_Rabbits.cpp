#include <bits\stdc++.h>
using namespace std;


void solve()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    bool possible = true;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            bool forced_jump_left = false;
            if (i > 0 && s[i - 1] == '1')
            {
                if (i < 2 || s[i - 2] == '1')
                { 
                    forced_jump_left = true;
                }
            }
        
            bool forced_jump_right = false;
            if (i < n - 1 && s[i + 1] == '1')
            {
                if (i >= n - 2 || s[i + 2] == '1')
                {
                    forced_jump_right = true;
                }
            }

            if (forced_jump_left && forced_jump_right)
            {
                possible = false;
                break;
            }
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}