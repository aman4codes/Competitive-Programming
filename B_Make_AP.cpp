#include <bits/stdc++.h>
using namespace std;

bool canFormAP(int a, int b, int c)
{

    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
        return true;

    if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
        return true;

    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
        return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (canFormAP(a, b, c))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
