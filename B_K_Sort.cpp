#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int k = 0;
        long long diff = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                long long int nq = arr[j - 1] - arr[j];
                k = k + nq;
                diff=max(diff,nq);
                arr[j]=arr[j-1];
            }
        }
        cout << k + diff << endl;
    }
}