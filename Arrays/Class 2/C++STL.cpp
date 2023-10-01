#include<iostream>
#include<vector>
using namespace std;

void print(vector <int> v){
    int size = v.size();
    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }
}

int main(){
    //Static memory allocation
    // int arr[5] = {1,2,3,4,5};

    //Dynamic memory allocation
    // int n;
    // cin >> n;
    // int *arr = new int[n];

    // for(int i=0; i<n; i++){
    //     int data;
    //     cin >> data;
    //     arr[i] = data;
    // }

    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    vector <int> v;
    //inserting elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.pop_back();

    print(v);

    return 0;
}