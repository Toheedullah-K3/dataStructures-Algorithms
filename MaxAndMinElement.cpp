#include<iostream>
#include<limits.h>

using namespace std;


struct MinMax {
    int min;
    int max;
};

MinMax getMinMaxFunc(int arr[] , int size){
    MinMax minmax;

    minmax.min = INT_MAX;
    minmax.max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] < minmax.min){
            minmax.min = arr[i];
        }
        
        if(arr[i] > minmax.max){
            minmax.max = arr[i];
        }
        
    }

    return minmax;
};


int main(){
    // int size;
    // cout << "Enter Size of an Array"<<endl;
    // cin >> size;

    int arr[5] = {4,3,5,7,1};
    int arr1[7] = {4,3,5,7,1,67,-1};

    MinMax output = getMinMaxFunc(arr1 , 7);

    cout << "MIN Element  :  " << output.min;
    cout << endl;
    cout << "MAX Element  :  " << output.max;
}