#include <iostream>
#include <set>
using namespace std;

set<pair<long long, long long>> knight_moves(long long x, long long y, long long a, long long b) {
    set<pair<long long, long long>> moves;
    moves.insert({x + a, y + b});
    moves.insert({x + a, y - b});
    moves.insert({x - a, y + b});
    moves.insert({x - a, y - b});
    moves.insert({x + b, y + a});
    moves.insert({x + b, y - a});
    moves.insert({x - b, y + a});
    moves.insert({x - b, y - a});
    return moves;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xK, yK;
        cin >> xK >> yK;

        long long xQ, yQ;
        cin >> xQ >> yQ;

        set<pair<long long, long long>> attack_king = knight_moves(xK, yK, a, b);
        set<pair<long long, long long>> attack_queen = knight_moves(xQ, yQ, a, b);

        int count = 0;
        for (auto pos : attack_king) {
            if (attack_queen.count(pos)) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
