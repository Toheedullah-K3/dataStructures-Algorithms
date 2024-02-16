#include<iostream>
using namespace std;


int binarySearchRotated(int arr[], int start, int end, int target) {
    if (end >= start) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[start] <= arr[mid]) {
            if (arr[start] <= target && target <= arr[mid])
                return binarySearchRotated(arr, start, mid - 1, target);
            else
                return binarySearchRotated(arr, mid + 1, end, target);
        }
        
        if (arr[mid] <= target && target <= arr[end])
            return binarySearchRotated(arr, mid + 1, end, target);
        else
            return binarySearchRotated(arr, start, mid - 1, target);
    }

    return -1;
}


int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]);

    int target = 0;

    int result = binarySearchRotated(arr, start, end - 1, target);

    cout << "Output : " << result << endl;
}