#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    string s;
    int n;
    cin >> n;
    cin >> s;
    int cnt_a = 0;
    int cnt_d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            cnt_a++;
        else
            cnt_d++;
    }

    if (cnt_d == cnt_a)
    {
        cout << "Friendship" << endl;
    }
    else if (cnt_d>cnt_a)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Anton"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}