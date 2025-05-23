#include <bits/stdc++.h>
using namespace std;

int count_of_1(int n, string s)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') // correct character check
        {
            count++;
        }
    }
    return count; // return the count
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int total_ones = 0;
        for (int j = 0; j < n; j++)
        {
            // flip j-th character
            if (s[j] == '0')
                s[j] = '1';
            else
                s[j] = '0';

            total_ones += count_of_1(n, s); // get and add the count

            // flip back to restore original for next iteration
            if (s[j] == '0')
                s[j] = '1';
            else
                s[j] = '0';
        }
        cout << total_ones << endl;
    }
    return 0;
}
