#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        long long int max;
        long long int min;
        cin >> n;
        if(n%2==0 &&  n>=4)
        {
            if (n % 12 == 0)
            {
                cout << n / 6 << " " << n / 4 << endl;
            }
            else
            {
                if (n % 4 == 0 || n % 6 == 0)
                {
                    if (n % 4 == 0)
                    {
                        max = n / 4;
                        min = (n / 6) + 1;
                        cout << min << " " << max << endl;
                    }
                    else
                    {
                        min = n / 6;
                        max = n / 4;
                        cout << min << " " << max << endl;
                    }
                }
                else if (n % 4 != 0 && n % 6 != 0)
                {
                    if (n % 2 == 0)
                    {
                        max = n / 4;
                        min = (n / 6) + 1;
                        cout << min << " " << max << endl;
                    }
                    else
                    {
                        cout << "-1" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}