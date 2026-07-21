#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<", ";
    }
}

// Bubble Sort -> Sorts adjecent elements & pushes the laregest number to the back.
void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr, n);
}

// Selection Sort -> Brings the smallest number to the front.
void selection_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
    print(arr, n);
}

// Insertion Sort -> Pick from unsorted part & then place it in the sorted part.
void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
    }
    print(arr, n);
}

// Counting Sort -> In this we count frequency of the element in the array in an auxillary array & then print it.
void count_sort(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int count[max + 1] = {0};
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    for(int i = 0; i <= max; i++){
        while(count[i] > 0){
            cout<<i<<", ";
            count[i]--;
        }
    }
}

int main(){

    int arr[] = {4, 7, 8, 2, 1, 0, 9};
    int size = sizeof(arr) / sizeof(int);

    count_sort(arr, size);
    return 0;
}