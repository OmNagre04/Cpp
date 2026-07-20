#include<iostream>
using namespace std;

int largest(int arr[], int size){

    int maxi = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

bool linear(int arr[], int n, int tar){

    for(int i = 0; i < n; i++){
        if(arr[i] == tar){
            return true;
        }
    }
    return false;

}

void rev(int arr[], int n){
    int start = 0, end = n - 1;
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
}

int binarySearch(int arr[], int n, int tar){
    int start = 0, end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == tar){
            return mid;
        } else if (arr[mid] < tar){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2, 4, 6, 7, 11, 32};
    int size = sizeof(arr) / sizeof(int);
    // cout<<largest(arr, size);
    // cout<<linear(arr, size, 40);
    // rev(arr, size);
    // print(arr, size);
    cout<<binarySearch(arr, size, 7);

    return 0;
}