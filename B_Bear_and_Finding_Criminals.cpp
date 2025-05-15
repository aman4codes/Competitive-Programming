#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    int sum = 0;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (((a - j) >= 0) || ((a + j) <= n))
        {
            if ((arr[a - j] == 1) || (arr[a + j] == 1))
            {
                sum += 1;
            }
        }
        else
        {
            break;
        }
    }
    cout << sum << endl;
}