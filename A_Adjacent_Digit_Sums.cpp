#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, y;
        cin >> num >> y;
        int sum = 0;
        num = num + 1; // Increment num by 1 to start
        
        // Calculate the sum of digits of num
        while (num >= 10)
        { 
            sum = 0; // Reset sum for the next calculation
            while (num > 0)
            {
                sum += num % 10; // Extract last digit and add to sum
                num /= 10;        // Remove last digit
            }
            num = sum; // Update num with the sum of its digits
        }

        // Calculate the sum of digits of y
        int sum2 = 0;
        while (y >= 10)
        { 
            sum2 = 0; // Reset sum2 for the next calculation
            while (y > 0)
            {
                sum2 += y % 10; // Extract last digit and add to sum
                y /= 10;         // Remove last digit
            }
            y = sum2; // Update y with the sum of its digits
        }

        // Check if both numbers are equal after reducing to a single digit
        if (num == y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
