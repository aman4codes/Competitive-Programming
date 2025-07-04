#include <bits/stdc++.h>
using namespace std;

bool check_element(const vector<int>& arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size_a;
        cin >> size_a;

        vector<int> arr_a;
        vector<int> arr_b;
        vector<int> arr_c;

        for (int i = 0; i < size_a; i++)
        {
            int in;
            cin >> in;
            arr_a.push_back(in);
        }

        sort(arr_a.begin(), arr_a.end(), greater<int>());

        if (check_element(arr_a))
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            // Find max element and its count
            int max_val = arr_a[0]; // Because arr_a sorted descending
            int count_max = 0;
            for (int x : arr_a)
            {
                if (x == max_val)
                    count_max++;
            }
    
            // Add max_val count_max times to arr_c
            for (int i = 0; i < count_max; i++)
            {
                arr_c.push_back(max_val);
            }
            
            cout<<arr_b.size()<<" "<<arr_c.size()<<endl;
            // Add remaining elements (not max_val) to arr_b
            for (int x : arr_a)
            {
                if (x != max_val)
                    arr_b.push_back(x);
            }
    
            // Print arr_b
            for (int x : arr_b)
                cout << x << " ";
            cout << endl;
    
            // Print arr_c (all max elements)
            for (int x : arr_c)
                cout << x << " ";
            cout << endl;
        }

    }
}
