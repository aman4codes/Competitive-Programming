#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    string s;
    cin >> s;
    long long int count_1 = 0;
    long long int count_0 = 0;
    long long int size_s = s.length();
    for (int i = 0; i < size_s; i++)
    {
        if (s[i] == '0')
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }
    int size_t = 0;

    if (count_0 == count_1)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int j = 0; j <= size_s; j++)
        {
            if (s[j] == '0')
            {
                if (count_1 > 0)
                {
                    count_1--;
                    size_t++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (count_0 > 0)
                {
                    count_0--;
                    size_t++;
                }
                else
                {
                    break;
                }

            }
        }

        cout << size_s-size_t<< endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}