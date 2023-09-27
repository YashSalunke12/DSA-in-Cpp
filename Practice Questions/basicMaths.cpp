#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
    fact = fact * i;
    }
    return fact;
}

void checkPrime(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "It is a prime number";
    }
    else{
        cout << "It is not a prime number";
    }
}

void isPrime(int n){
    for(int i=1; i<=n; i++){
        checkPrime(i);
        cout << endl;
    }
}


int main(){

    int n;
    cin >> n;
    // cout << factorial(n);
    // checkPrime(n);
    isPrime(n);
    return 0;
}