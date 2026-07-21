#include<iostream>
using namespace std;

void trasposeMat(int arr[][3], int n, int m){
    int trans[m][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            trans[j][i] = arr[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<trans[i][j]<<",";
        }
        cout<<endl;
    }
    
}

int main(){

    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6}};
    
    trasposeMat(arr, 2, 3);
    return 0;
}