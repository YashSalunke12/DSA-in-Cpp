#include<iostream>
using namespace std;

int main(){
    // int n, sum; // sum should be initialised with zero
    int n;
    int sum = 0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        // cin >> input[0]; //input[0] shoul be input[i]
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}