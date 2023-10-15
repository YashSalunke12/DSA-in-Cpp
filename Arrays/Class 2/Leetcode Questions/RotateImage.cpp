#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateImage(vector<vector <int>> arr){
    int n = arr.size();
    //transpose the matrix
    for(int i=0; i<n; i++){
        for(int j=i; j<arr[i].size(); j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    //reverse the rows
    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }

    //printing the array
    for(int i=0; i<n; i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    vector <vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotateImage(arr);

    return 0;
}