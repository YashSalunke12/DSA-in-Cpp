#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        // int temp = arr[i];
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    swapAlternate(arr, size);

    return 0;
}