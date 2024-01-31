#include <iostream>
#include <unordered_set>
using namespace std;

bool findDuplicate(int arr[], int size) {
    unordered_set<int> seen;

    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return true;
        }
        seen.insert(arr[i]);
    }

    
    return false;
}

int main() {
    int arr[] = {4, 2, 6, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(int);

    bool duplicate = findDuplicate(arr, size);

    if (duplicate) {
        cout << "Duplicate items";
    } else {
        cout << "All items in the array are distinct";
    }

    return 0;
}

// Duplicate Elements Array !-! this is a duplicate element !-! maximum SubArray !-! github.com/dataStructure-Algorithms