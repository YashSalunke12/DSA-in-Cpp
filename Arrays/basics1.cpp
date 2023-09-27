#include<iostream>
using namespace std;

int main(){

    // Static Array

    int arr[10];

    // Taking input in array 
    cout << "Enter the input values in array" << endl;
    for(int i=0; i<10; i++){
        cin  >> arr[i];
    }

    // Printing the values of array
    cout << "printing the values in array" << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }

    return 0;
}