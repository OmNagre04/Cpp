#include<iostream>
using namespace std;

void spiral_mat(int arr[][4], int n){
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;

    while (row_start <= row_end && col_end >= col_start){

        // Top
        for(int i = col_start; i <= col_end; i++){
            cout<<arr[row_start][i]<<", ";
        }
        // Right
        for(int j = row_start + 1; j <= row_end; j++){
            cout<<arr[j][col_end]<<", ";;
        }
        // Bottom
        for(int i = col_end - 1; i >= col_start; i--){
            if(row_end == col_end){
                break;
            }
            cout<<arr[row_end][i]<<", ";;
        }
        // Left
        for(int j = row_end - 1; j > row_start; j--){
            if(col_start == row_end){
                break;
            }
            cout<<arr[j][col_start]<<", ";;
        }
        row_end--;
        row_start++;
        col_end--;
        col_start++;
        
    }
}

void diagonalSum(int arr[][4], int m){
    int sum = 0;
    for(int i = 0; i < m; i++){
        sum += arr[i][i];
        if(i != m - i - 1){
            sum += arr[i][m - i - 1];
        }
    }
    cout<<sum;
}

void ladder_search(int arr[][4], int n, int target){
    int row = 0, col = n - 1;
    while(row < n && col >= 0){
        if(arr[row][col] == target){
            cout<<"Index : "<<row<<", "<<col;
            return;
        } else if(arr[row][col] < target){
            row++;
        } else{
            col--;
        }
    }
}

int main(){

    int arr[][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10 , 11, 12},
                    {13, 14, 15, 16}};

    // spiral_mat(arr, 4);
    // diagonalSum(arr, 4);

    ladder_search(arr, 4, 15);
    return 0;
}