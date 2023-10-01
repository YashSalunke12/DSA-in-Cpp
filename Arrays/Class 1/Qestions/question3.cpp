#include<iostream>
using namespace std;

int main(){

    int arr[9] = {1,0,1,1,0,1,0,0,0};
    int size = 9;
    int countOne = 0;
    int countZero = 0;

    for(int i=0; i<size; i++){
        if(arr[i]==1){
            countOne++;
        }
        else{
            countZero++;
        }
    }
    cout << "There are " << countOne << " one's in the given array" << endl;
    cout << "There are " << countZero << " zero's in the given array" << endl;

    return 0;
}