#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < (n - 1); i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < (n - 1); j++)
        {
            sum = sum + arr[j];
        }
        sum = sum * (-1);
        cout << sum << endl;
    }
}