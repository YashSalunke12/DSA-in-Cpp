#include<iostream>
using namespace std;

void printSum(int arr[][4], int rows, int cols){
    int sum = 0;
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            sum = sum + arr[j][i];
        }
        cout << "The sum of row " << i << " is : " << sum << endl;
        sum = 0;
    }
}

int main(){
    int arr[3][4] = {
        {10,20,5,7},
        {2,4,6,8},
        {10,15,15,10}
    };
    int rows = 3;
    int cols = 4;

    printSum(arr, rows, cols);
}