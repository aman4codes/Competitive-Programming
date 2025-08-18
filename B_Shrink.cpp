#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
    
        int left = 0, right = n - 1;
        int val = 1;

        while (left <= right) 
        {
            if (left <= right) arr[left++] = val++;
            if (left <= right) arr[right--] = val++;
        }

        // Print the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}