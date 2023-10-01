#include<iostream>
using namespace std;

void easyApproach(int arr[], int size){
    //counting zeros and ones 
    int zerosCount = 0;
    int onesCount = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zerosCount++;
        }
        else{
            onesCount++;
        }
    }

    // Placing zeros and ones
    int index = 0;
    while(zerosCount--){
        arr[index] = 0;
        index++;
    }

    while(onesCount--){
        arr[index] = 1;
        index++;
    }

    // Printing array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

}

void sortZerosOnes(int arr[], int size){
    //counting zeros and ones 
    int zerosCount = 0;
    int onesCount = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zerosCount++;
        }
        else{
            onesCount++;
        }
    }

    // Placing all zeros
    int i;
    for(i=0; i<zerosCount; i++){
        arr[i] = 0;
    }

    // Placing all ones
    for(int j=i; j<size; j++){
        arr[j] = 1;
    }

    // Printing array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1,0,0,1,1,1,0,1,0,0,0,1,0,0};
    int size = 14;

    // sortZerosOnes(arr, size);
    easyApproach(arr, size);

    return 0;
}