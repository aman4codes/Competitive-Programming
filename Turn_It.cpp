#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int u, v, a, s, j;
        cin >> u >> v >> a >> s;
        bool condition_met = false;
        for (int i = 0; i <= a; i++)
        {
            double j = sqrt((u * u) - 2 * i * s);
            if (j <= v)
            {
                cout << "Yes" << endl;
                condition_met = true;
                break;
            }
        }
        if (!condition_met)
        {
            cout << "NO" << endl;
        }
    }
}