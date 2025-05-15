#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int &n, int removed[], int &removedSize) {
    unordered_set<int> seen;
    int j = 0;
    removedSize = 0;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[j++] = arr[i];
        } else {
            removed[removedSize++] = arr[i];
        }
    }
    n = j; // Update size of unique array
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int removed[10], removedSize = 0;

    removeDuplicates(arr, n, removed, removedSize);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << "\nRemoved elements: ";
    for (int i = 0; i < removedSize; i++)
        cout << removed[i] << " ";

    return 0;
}
