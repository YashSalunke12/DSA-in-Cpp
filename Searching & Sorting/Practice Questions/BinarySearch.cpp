#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid]==target){
           return mid;
        }
 
        if(target>arr[mid]){
            start = mid + 1;
        }
        if(target<mid){
            end = mid - 1;
        }
        //update mid
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int target = 70;
    int ansIndex = binarySearch(arr, size, target);
    if(ansIndex == -1){
        cout << "Element not found";
    }
    else{
        cout << "Element found at index : " << ansIndex << endl;
    }
    return 0;
}