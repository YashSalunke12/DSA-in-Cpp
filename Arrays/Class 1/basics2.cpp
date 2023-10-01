#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<2; i++){
        cout << arr[i] << " ";
    }
}

void inc(int arr[], int size){
    arr[0] = arr[0] + 10;
    printArray(arr, size);
}

int main(){

    int arr[] = {2,5};
    int size = 2;
    inc(arr, size);
    printArray(arr, size);

    return 0;
}