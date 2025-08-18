#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n_copy = n;
        int x = 0;

        if (n % 2 != 0)
        {
            cout << ((n / 2) + 1) << endl;
        }
        else
        {
            x = x + ((n_copy / 2) + 1);

            while (true && n_copy > 0)
            {
                
                if ((n_copy / 2) % 2 != 0)
                {
                    n_copy = n_copy / 2;
                    x = x + (n_copy / 2);
                    // x = x - ((n - n_copy) / 2);
                    break;
                }
                
                n_copy = n_copy - 2;
            }

            cout << x << endl;
        }
    }
}