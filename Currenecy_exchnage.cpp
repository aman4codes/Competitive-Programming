#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int intial_value = (5 * (a1) + b1);
        int final_value = (5 * (a2) + b2);

        int difference = intial_value - final_value;

        if (difference < 0)
        {
            cout << "No" << endl;
        }
        else if (difference % 6 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}