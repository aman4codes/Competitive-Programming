#include <iostream>
#include <string> 

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t; 

    while (t--) 
    { 
        int n;
        std::cin >> n;

        int count = 0;
        int power_of_10 = 1;

        // Calculate count for extremely round numbers with fewer digits than n
        // For example, if n=423:
        // First iteration: power_of_10 = 10. Adds 9 (for 1-digit numbers 1-9)
        // Second iteration: power_of_10 = 100. Adds 9 (for 2-digit numbers 10-90)
        // Loop stops when power_of_10 * 10 exceeds n.
        while (power_of_10 * 10 <= n) {
            power_of_10 *= 10;
            count += 9;
        }

        // Add count for extremely round numbers with the same number of digits as n
        // These numbers are formed by (first_digit_of_n) * power_of_10
        // For n=423, power_of_10 is 100. (423 / 100) = 4. Adds 4 (for 100, 200, 300, 400)
        count += (n / power_of_10);

        std::cout << count << std::endl; // Print the result for the current test case
    }

    return 0;
}