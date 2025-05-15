#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, chef_name;
        cin >> n;
        cin >> a;
        int j = a[0] - a[n - 1];
        if (a[0] != 'z')
        {
            if (j >= 0)
            {
                for (int i = 0; i < n; i++)
                {
                    a[i] = a[i] + j;
                }
                chef_name = a;
                cout << chef_name << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    a[i] = a[i] + 1;
                }
                chef_name = a;
                cout << chef_name << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}