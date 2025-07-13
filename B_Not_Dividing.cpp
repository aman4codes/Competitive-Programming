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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
            {
                arr[i]++;
            }
        }

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] % arr[j] == 0)
            {
                arr[j + 1]++;
            }
        }
        for (int g : arr)
        {
            cout << g << " ";
        }
        cout << endl;
    }
}