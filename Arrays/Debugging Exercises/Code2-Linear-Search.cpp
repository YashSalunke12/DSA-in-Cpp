#include<iostream>
using namespace std;

void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            // return; //why are we returning in void function 
            cout << "found";
        }
    }
    // return;
}

int main(){

    int arr[] = {2,4,3,5,63,6};
    int n = 6;
    int val = 63;
    linearSearch(arr, n, val);

    return 0;
}