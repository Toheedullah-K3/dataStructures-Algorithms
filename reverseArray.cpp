#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(end > start){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        end--;
        start++;
    }
}


void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {9,5,1,7,2,6,3};
    int size = sizeof(arr) / sizeof(int);
    
    reverseArray(arr, size);

    printArray(arr, size);
}