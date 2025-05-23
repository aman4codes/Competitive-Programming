#include <bits/stdc++.h>
using namespace std;

// Recursive function to check if current player can win
bool canWin(int x, int y, int prevMove) {
    // Try removing from either pile with > prevMove stones
    for (int take = prevMove + 1; take <= max(x, y); ++take) {
        // If pile x has enough stones
        if (x >= take && !canWin(x - take, y, take)) {
            return true;
        }
        // If pile y has enough stones
        if (y >= take && !canWin(x, y - take, take)) {
            return true;
        }
    }
    // No winning move found
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        bool aliceWins = false;

        // Try all possible valid first moves for Alice
        for (int firstMove = 1; firstMove <= k; ++firstMove) {
            // Try from pile x
            if (x >= firstMove && !canWin(x - firstMove, y, firstMove)) {
                aliceWins = true;
                break;
            }
            // Try from pile y
            if (y >= firstMove && !canWin(x, y - firstMove, firstMove)) {
                aliceWins = true;
                break;
            }
        }

        cout << (aliceWins ? "Alice" : "Bob") << endl;
    }
    return 0;
}
