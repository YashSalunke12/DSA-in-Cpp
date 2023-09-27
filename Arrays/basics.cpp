#include<iostream>
using namespace std;

int main(){

    // Declaration of an array
    // int arr[20];
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << "Array created succesfully" << endl;

    // Array initialise
    int arr[] = {2,3,4,5,6,7};
    int brr[5] = {2,3,4,5,6};
    int crr[10] = {2,3,4,5,2};
    cout << "Array initialised succesfully" << endl;

    // Accessing elements

    cout << arr[0] << endl;
    for(int i=0; i<6; i++){
        cout << arr[i] << endl;
    }

    return 0;
}