#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;


int findMinDiff(int arr[], int size, int students){
    
    sort(arr, arr + size);
    int start = 0;
    int end = students - 1;
    
    int minDiff = INT_MAX;

    while(end < size){
        int diff = arr[end] - arr[start];
        if(diff < minDiff){
            minDiff = diff;
        };
        end++;
        start++;
    };
    return minDiff;
};

int main(){
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int students = 3;

    int result = findMinDiff(arr, size, students);

    cout << "Minimum Difference is --> " << result << endl;
};