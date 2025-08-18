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

        a1 = a1 + (b1 / 5);
        b1 = b1 % 5;

        int min_ab_1 = min(a1, b1);

        int sum_ab_1 = abs(((a1 - min_ab_1) - (b1 - min_ab_1)));

        a2 = a2 + (b2 / 5);
        b2 = b2 % 5;

        int min_ab_2 = min(a2, b2);

        int sum_ab_2 = abs(((a2 - min_ab_2) - (b2 - min_ab_2)));

        if (sum_ab_1 == sum_ab_2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}