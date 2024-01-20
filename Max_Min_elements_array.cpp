#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int size){
    // bubble sort

    Pair minmax;

    sort(arr, arr + size);

    minmax.min = arr[0];
    minmax.max = arr[size - 1];

    return minmax;
}
 
int main()
{
    int arr[] = {22, 14, 8, 17, 35, 3};
    Pair result = getMinMax(arr, 5);

    cout << "Minimum Element" << result.min<<endl;
    cout << "Maximum Element is "<< result.max;

}
 