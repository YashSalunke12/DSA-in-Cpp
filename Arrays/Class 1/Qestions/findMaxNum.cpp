#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {3,4,3,2,5,6,7,4,8,9};
    int maxNum = INT_MIN;
    int size = 10;
    for(int i=0; i<size; i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
    }
    cout << "The maximum number in the given array is : " << maxNum;

    return 0;
}