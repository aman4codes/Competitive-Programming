#include <bits/stdc++.h>
using namespace std;

bool check_diff(vector<int> &arr, int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j + 1] - arr[j] != 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int sum = 0; 
        int arr_index = 0;

        sort(arr.begin(), arr.end());

        if(arr[0]==0)
        {
            if (check_diff(arr, n))
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (arr[j + 1] - arr[j] != 1)
                    {
                        sum = arr[j] + 1;
                        arr_index = j + 1;
                        break;
                    }
                }
                for (int k = arr_index; k < n; k++)
                {
                    sum += arr[k];
                }
            }
            else
            {
                sum += arr[n - 2] + 1 + arr[n - 1];
            }
        }
        else
        {
           for (int l = 0; l < n; l++)
                {
                    sum += arr[l];
                }
        }


        cout << sum << endl;
    }
}