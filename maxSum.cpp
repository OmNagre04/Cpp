#include<iostream>
using namespace std;

void maxSubSum(int arr[], int n){
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int curSum = 0;
            for(int k = i; k <= j; k++){
                curSum += arr[k];
                maxSum = max(curSum, maxSum);
            }
        }
    }
    cout<<maxSum<<endl;
}

void optMaxSum(int arr[], int n){
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        int curSum = 0; 
        for(int j = i; j < n; j++){
            curSum += arr[j];
            maxSum = max(curSum, maxSum);
        }
    }
    cout<<maxSum<<endl;
}

void kadanesAlgo(int arr[], int n){
    int maxSum = INT_MIN;
    int curSum = 0;
    for(int i = 0; i < n; i++){
        curSum += arr[i];
        maxSum = max(maxSum, curSum);

        if(curSum < 0){
            curSum = 0;
        }
    }
    cout<<maxSum<<endl;
}

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int size = sizeof(arr) / sizeof(int);
    maxSubSum(arr, size);
    optMaxSum(arr, size);
    kadanesAlgo(arr, size);

    return 0;
}