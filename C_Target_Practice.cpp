#include <bits/stdc++.h>
using namespace std;

int getPoints(int i) {
    if (i <= 5) return i;
    else if (i == 6) return 5;
    else if (i == 7) return 4;
    else if (i == 8) return 3;
    else if (i == 9) return 2;
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> board(10);
        for (int i = 0; i < 10; i++) {
            cin >> board[i];
        }

        int sum = 0;

        for (int row = 0; row < 10; row++) {
            for (int col = 0; col < 10; col++) {
                if (board[row][col] == 'X') {
                    int r = row;
                    int c = col;
                    int minDist = min({r, c, 9 - r, 9 - c});
                    sum += (minDist + 1);
                }
            }
        }

        cout << sum << endl;
    }
}
