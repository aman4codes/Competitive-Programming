#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
using namespace std;

int findShortestGoodSubarray(vector<int>& arr) {
    int n = arr.size();
    int minLength = INT_MAX;

    for (int i = 0; i < n; ++i) {
        unordered_set<int> s;
        for (int j = i; j < n; ++j) {
            s.insert(arr[j]);
            if (s.size() > 2) break;
            if (s.size() == 2) {
                minLength = min(minLength, j - i + 1);
            }
        }
    }

    return (minLength == INT_MAX) ? -1 : minLength;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        cout << findShortestGoodSubarray(A) << endl;
    }

    return 0;
}
