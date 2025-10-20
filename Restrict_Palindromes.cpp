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
        char letters[] = {'a', 'b', 'c'};
        for (int i = 0; i < n; i++)
        {
            cout << letters[i % 3] << " ";
        }
        cout << endl;
    }
}