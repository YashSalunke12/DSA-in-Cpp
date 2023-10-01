#include<iostream>
using namespace std;

void shiftArrayNums(int arr[], int size){
    int temp[] = {arr[size-2],arr[size-1]};
    for(int i=size; i>0; i--){
        arr[i] = arr[i-2];
    }
    arr[0,1] = temp[0,1];

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    shiftArrayNums(arr, size);

    return 0;
}