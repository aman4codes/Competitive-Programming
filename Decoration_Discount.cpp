#include <bits/stdc++.h>
using namespace std;
int first_cost(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    return (arr[0] + arr[1]);
}

int second_cost(vector<int> &arr)
{
    int sum = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int temp = (arr[i] + (arr[i+1] / 2));
        sum=min(temp,sum);
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> arr;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        vector<int> copy_arr=arr;
        int first = first_cost(arr);
        int second = second_cost(copy_arr);

        cout<<min(first,second)<<endl;
    }
}