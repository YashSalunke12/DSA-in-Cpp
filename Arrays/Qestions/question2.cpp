#include<iostream>
using namespace std;

bool found(int arr[], int size, int key){
    
    // linear search
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    int key;
    cin >> key;

    int arr[] = {1,2,4,5,6};
    int size = 5;

    if(found(arr, size, key)){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }
    return 0;
}