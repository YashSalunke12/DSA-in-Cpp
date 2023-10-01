#include<iostream>
using namespace std;

void printArray(int arr[][4], int rows, int cols){
    //Printig 2D Array row wise
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void colWisePrintArray(int arr[][4], int rows, int cols){
    //Printig 2D Array column wise
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void takingInput(int brr[][3], int rows1, int cols1){
    //Taking input
    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols1; j++){
            cout << "Enter the input for row index: " << i << " Column index: " << j << endl;
            cin >> brr[i][j];
        }
        cout << endl;
    }

    //Printing array
    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols1; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    //Initialising 2D Array
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,1,2,4}
    };
    int rows = 3;
    int cols = 4;

    // printArray(arr, rows, cols);
    // colWisePrintArray(arr, rows, cols);

    //Taking input from user in an 2D Array
    int brr[3][3];
    int rows1 = 3;
    int cols1 = 3;

    takingInput(brr, rows1, cols1);

    return 0;
}