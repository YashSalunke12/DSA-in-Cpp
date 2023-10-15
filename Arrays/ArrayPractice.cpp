#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void inc(int arr[], int size){
    arr[0] = arr[0] + 20;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int findMaxNum(int arr[], int size){
    int maxNum = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}

bool findKey(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

void reverseArray(int arr[], int size){
    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size-1-i]);//{4,8,222,66,4,2,43,3,2}
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

void printArray1(int arr[][3], int rows, int cols){
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void print9Array2(vector<vector<int>> arr){
    int size = arr.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printPairs(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << arr[i] << arr[j] << " ";
        }
        cout << endl;
    }
}

void sortZerosOnes(int arr[], int size){
    int brr[size];
    int countZeros = 0;
    int countOnes = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            countZeros++;
        }
        else{
            countOnes++;
        }
    }
    int index = 0;
    for(int i=0; i<countZeros; i++){
        brr[i] = 0;
        index++;
    }
    for(int i=index; i<size; i++){
        brr[i] = 1;
        index++;
    }
    for(int i=0; i<size; i++){
        cout << brr[i] << " ";
    }

}


void shiftArrayNums(int arr[], int size){
    int temp = arr[size-1];
    for(int i=size; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void leftShift(int arr[], int size){
    int temp = arr[0];
    for(int i=0; i<size; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void rowWiseSum(vector<vector <int>> arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<arr[i].size(); j++){
            sum = arr[i][j] + sum;
        }
        cout << sum << endl;
    }
}

void transposeMatrix(vector<vector <int>> arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<arr[i].size(); j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    // int arr[] = {2,5};
    // int size = 2;

    // inc(arr, size);
    // printArray(arr, size);

    // int arr[] = {2,3,43,2,4,66,222,8,4};
    // int size = 9;
    
    // int finalAns = findMaxNum(arr, size);
    // cout << finalAns;

    // int key = 3;
    // int foundKey = findKey(arr,size,key);
    // if(foundKey == true){
    //     cout << "Key is present";
    // }
    // else{
    //     cout << "Key is absent";
    // }

    // reverseArray(arr, size);

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // print(v);

    // int arr[][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // int rows = 3;
    // int cols = 3;

    // printArray1(arr, rows, cols);

    // vector <vector <int>> arr = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {2,3,4,5}
    // };

    // printArray2(arr);

    // int arr[] = {23,-7,12,-10,-11,40,60};
    // int size = 7;
    // int j = 0;

    // for(int index=0; index<size; index++){
    //     if(arr[index]<0){
    //         swap(arr[index], arr[j]);
    //         j++;
    //     }
    // }


    // int index = 0;

    // while(index<size){
    //     if(arr[index]<0){
    //         swap(arr[index], arr[j]);
    //         j++;
    //     }
    //     index++;
    // }

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[] = {10, 20, 30};
    // int size = 3;
    // printPairs(arr, size);

    // int arr[] = {0,1,1,0,1,0,0,1,0,0,1,0,0};
    // int size = 13;
    // sortZerosOnes(arr, size);

    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // shiftArrayNums(arr, size);
    // leftShift(arr, size);

    // vector <vector <int>> arr1 = {
    //     {1,1,1,1},
    //     {2,2,2,2},
    //     {3,3,3,3},
    //     {4,4,4,4}
    // };
    // // rowWiseSum(arr1);
    // transposeMatrix(arr1);

    int arr[] = {23,-7,12,-10,-11,40,60};
    int size = 7;
    int a = size-1;
    for(int i=0; i<a; i++){
        if(arr[i]<0){
            arr[a] = arr[i];
            a--;       
        }
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }


    return 0;
}