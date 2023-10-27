#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n = arr.size();
    for(int i=0; i<arr[0].size(); i++){
        if(i&1==0){
            for(int j=0; j<n; j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout << arr[j][i] << " ";
            }
        } 
    }
    return 0;
}