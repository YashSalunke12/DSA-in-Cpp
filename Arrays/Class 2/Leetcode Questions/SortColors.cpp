#include<iostream>
using namespace std;

int main(){

//Two pointers approach

    int arr[] = {2, 0, 2, 1, 2, 0};
    int size = 6;
    int index = 0;
    int a = 0;
    int b = size-1;

    for(index=0; index<=b; index++){
        if(arr[index]==0){
            swap(arr[index], arr[a]);
            a++;
        }
        if(arr[index]==2){
            swap(arr[index], arr[b]);
            b--;
            index--;
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

//Counting approach
    // int arr[] = {2, 0, 2, 1, 1, 0};
    // int size = 6;
    // int index = 0;
    // int countZeros = 0;
    // int countOnes = 0;
    // int countTwos = 0;
    // for(int i=0; i<size; i++){
    //     if(arr[i] == 0){
    //         countZeros++;
    //     }
    //     if(arr[i] == 1){
    //         countOnes++;
    //     }
    //     if(arr[i] == 2){
    //         countTwos++;
    //     }
    // }

    // for(int i=0; i<countZeros; i++){
    //     arr[index] = 0;
    //     index++; 
    // }
    // for(int i=0; i<countOnes; i++){
    //     arr[index] = 1;
    //     index++; 
    // }
    // for(int i=0; i<countTwos; i++){
    //     arr[index] = 2;
    //     index++; 
    // }

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }

    return 0;
}