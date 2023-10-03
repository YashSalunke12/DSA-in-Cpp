#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Initialising an 2D Array using Vector
    vector <vector<int> > arr(5, vector<int>(10,0));
    // size of vector is = arr.size()
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector <vector<int> > brr;

    vector<int> v1(5,3);
    vector<int> v2(8,7);
    vector<int> v3(3,6);
    vector<int> v4(6,9);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);

    for(int i=0; i<brr.size(); i++){
        for(int j=0; j<brr[i].size(); j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}