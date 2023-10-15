#include<iostream>
using namespace std;

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}
int main(){

    int arr[] = {2,3,7,9,4,6,1};
    int x = 10;
    int size = 7;
    int totalPairs = pairSumToX(arr, size, x);
    cout << totalPairs;

    return 0;
}