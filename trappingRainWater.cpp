#include<iostream>
using namespace std;

void trappedWater(int arr[], int n){
    int leftMax[n], rightMax[n];
    leftMax[0] = arr[0], rightMax[n - 1] = arr[n - 1];

    if(n <= 2){
        cout<< 0;
    }

    // Left Max Array;
    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }

    // Right Max Array;
    for(int i = n - 2; i >= 0; i--){
        rightMax[i] = max(arr[i], rightMax[i + 1]);
    }

    // Calculate trapped Water;
    int trappedWater = 0;
    for(int i = 0; i < n; i++){
        trappedWater += min(leftMax[i], rightMax[i]) - arr[i];
    }

    cout<<trappedWater;
}

int main(){

    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    trappedWater(arr, size);
    return 0;
}