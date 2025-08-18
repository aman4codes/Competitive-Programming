#include <bits/stdc++.h>

using namespace std;

void solve() 
{
    int n;
    cin >> n;
    map<int, int> freq;
    int max_freq = 0;
    for (int i = 0; i < n; ++i) 
    {
        int a;
        cin >> a;
        freq[a]++;
        if (freq[a] > max_freq) 
        {
            max_freq = freq[a];
        }
    }

    if (max_freq == n) 
    {
        cout << 0 << std::endl;
        return;
    }

    int ops = 0;
    int current_count = max_freq;
    
    // Initial state: We have one array with `max_freq` of the desired element.
    // We need to fill `n - max_freq` more spots.
    
    while (current_count < n) 
    {
        // Step 1: Clone the current state. Costs 1 operation.
        ops++;
        
        // After cloning, we have `current_count` new elements to use.
        // We can swap at most `current_count` elements into our target array.
        // The number of spots we still need to fill is `n - current_count`.
        
        int elements_to_add = n - current_count;
        int swaps_possible = current_count;
        
        int swaps_to_do = min(elements_to_add, swaps_possible);
        
        ops += swaps_to_do;
        current_count += swaps_to_do;
    }
    
    cout << ops << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}