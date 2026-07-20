#include<iostream>
using namespace std;

void BuyAndSell(int arr[], int n){

    int MaxProfit = 0;
    int buyPrice = arr[0];

    for(int i = 1; i < n; i++){
        if(buyPrice < arr[i]){
            int profit = arr[i] - buyPrice;
            MaxProfit = max(MaxProfit, profit);
        } else {
            buyPrice = arr[i];
        }
    }
    cout<< MaxProfit;
}

int main(){

    int arr[] = {7,1,5,3,6,4};
    int size = sizeof(arr) / sizeof(int);

    BuyAndSell(arr, size);

    return 0;
}