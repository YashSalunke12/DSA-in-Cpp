#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[][3], int rows, int cols){
    int maxNum = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxNum){
                maxNum = arr[i][j];
            }
        }
    }
    cout << "The maximum number is : " << maxNum;
}

int main(){

    int arr[3][3] = {
        {20,1,302},
        {43,49,32},
        {2933,23,4}
    };
    int rows = 3;
    int cols = 3;

    findMax(arr, rows, cols);

    return 0;
}