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
        chef_name = "";
        cin >> n;
        cin >> a;
        if(all_of(a.begin(), a.end(), [](char c) { return c == 'z'; }))
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            chef_name = string(n, 'z');
            cout << chef_name << endl;
        }
    }
}