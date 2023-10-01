#include<iostream>
using namespace std;

int findMaxNum(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
    
}

int main(){
    int a = 10;
    int b = 5;
    int c = 20;
    
    int maxNum = findMaxNum(a, b, c);
    cout << maxNum;

    return 0;
}