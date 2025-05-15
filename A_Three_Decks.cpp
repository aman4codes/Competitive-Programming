#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int avg = ((a + b + c) % 3);
        int real_avg=((a + b + c) / 3);
        if (avg == 0)
        {
            if(b<=real_avg)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}