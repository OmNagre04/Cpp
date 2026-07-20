#include<iostream>
using namespace std;

void product(int arr[], int n){

    int maxProduct = INT_MIN;
    int pre = 1, suf = 1;
    for(int i = 0; i < n; i++){
        if(pre == 0){
            pre = 1;
        }
        if(suf == 0){
            suf = 1;
        }

        pre *= arr[i];
        suf *= arr[n - i - 1];

        maxProduct = max(maxProduct, max(pre, suf));
    }

    cout<<maxProduct;
}

int main(){

    int arr[] = {-2,3,-2,4};
    int size = sizeof(arr) / sizeof(int);

    product(arr, size);
    return 0;
}