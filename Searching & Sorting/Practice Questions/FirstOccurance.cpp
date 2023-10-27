#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int ans = 0;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        if(target>arr[mid]){
            start = mid+1;
        }
        if(target<arr[mid]){
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {10,20,30,30,30,30,40,50};
    int size = 8;
    int target = 30;
    int ansIndex = binarySearch(arr, size, target);
    cout << "The first occurance of the given target is at index : " << ansIndex << endl;
    return 0;
}