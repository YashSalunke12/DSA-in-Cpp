#include<iostream>
using namespace std;

int getEvenSum(int a){
    int sum = 0;
    for(int i=0; i<=a; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int a;
    cin >> a;

    int evenSum = getEvenSum(a);
    cout << evenSum;
    return 0;
}