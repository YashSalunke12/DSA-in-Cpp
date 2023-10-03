#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50,60};
    int n = 4;
    int size = 6;
    int temp[n];

// Copy the last 'n' elements of arr into the temp array
    for(int i=size-n, j=0; i<size; i++, j++){
        temp[j] = arr[i];
    }

// Shift the elements in arr to the right by 'n' positions
    for(int i=size-1; i>=0; i--){
        arr[i] = arr[i-n];
    }

// Copy the elements from temp back to arr
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}