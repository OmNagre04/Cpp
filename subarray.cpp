#include<iostream>
using namespace std;

void subar(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout<<"(";
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<",";
            }
            cout<<")";
        }
        cout<<endl;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    subar(arr, size);
    return 0;
}