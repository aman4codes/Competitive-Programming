#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minRemovalsToFashionable(vector<int> a) {
    sort(a.begin(), a.end());
    int n = a.size();


    if ((a.front() + a.back()) % 2 == 0)
        return 0;


    int count_front = 0;
    vector<int> temp = a;
    while (temp.size() >= 2 && (temp.front() + temp.back()) % 2 != 0) {
        temp.erase(temp.begin());
        count_front++;
    }
    if (temp.size() < 2)
        count_front = 1e9; 


    int count_back = 0;
    temp = a;
    while (temp.size() >= 2 && (temp.front() + temp.back()) % 2 != 0) {
        temp.pop_back();
        count_back++;
    }
    if (temp.size() < 2)
        count_back = 1e9;

    int ans = min(count_front, count_back);
    return (ans == 1e9) ? n - 1 : ans; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << minRemovalsToFashionable(a) << endl;
    }
    return 0;
}
