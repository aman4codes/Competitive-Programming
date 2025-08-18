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
        vector<int> arr;
        int n_copy = n;
        if (n == 1)
        {
            cout << -1;
        }
        else if (n == 2)
        {
            cout << -1 << " " << 2;
        }
        else if (n == 3)
        {
            cout << -1 << " " << 3 << " " << -1;
        }
        else
        {
            if (n % 2 != 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 != 0)
                    {
                        arr.push_back(-1);
                    }
                    else
                    {
                        arr.push_back(3);
                    }
                }
            }
            else
            {
                for (int q = 1; q <= n; q++)
                {
                    if(q!=n)
                    {
                        if (q % 2 != 0)
                        {
                            arr.push_back(-1);
                        }
                        else
                        {
                            arr.push_back(3);
                        }
                    }
                    else
                    {
                        arr.push_back(2);
                    }
                }
            }

            for (int y : arr)
            {
                cout << y << " ";
            }
        }
        cout << endl;
    }
}