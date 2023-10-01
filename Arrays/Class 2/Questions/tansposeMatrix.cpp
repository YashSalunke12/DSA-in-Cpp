#include<iostream>
using namespace std;

void transposeMatrix(int arr[][4], int rows, int cols){    for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<rows; i++){
        for(int j=i; j<cols; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){

    int arr[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    int rows = 4;
    int cols = 4;

    transposeMatrix(arr, rows, cols);

    return 0;
}