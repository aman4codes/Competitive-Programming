#include <iostream>
    using namespace std;
    
    int main() {
        int t;
        cin >> t;  // Number of test cases
    
        while (t--) {
            int n, m, l, r;
            cin >> n >> m >> l >> r;
    
            // Try all possible l' from (0 - m) to 0
            for (int x = 0; x <= m; ++x) {
                int l_prime = 0 - x;
                int r_prime = l_prime + m;
    
                // Check if [l', r'] is a subsegment of [l, r]
                if (l_prime >= l && r_prime <= r) {
                    cout << l_prime << " " << r_prime << endl;
                    break;  // Found a valid answer, move to next test case
                }
            }
        }
    
        return 0;
    }
