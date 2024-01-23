#include<iostream>
using namespace std;

int maximumSubArray(int arr[], int size){
    int maxSum = 0;
    int currSum = 0;

    for(int i = 0; i < size; i++){
        currSum += arr[i];

        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }

    };
    return maxSum;
};


int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr) / sizeof(int);

    int maximumSubArrayTotal = maximumSubArray(arr, size);

    cout << "Maximum SubArray Total is --> " << maximumSubArrayTotal;

}