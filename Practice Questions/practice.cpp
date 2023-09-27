#include<iostream>
using namespace std;

int main(){

    int n=4;
    int i=1;
    while(i<=n){
        int j=i, count = 2*n-1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout << " ";
            k++;
        }
        int m=1, ch = count - 2*gaps+1;
        while(m<ch){
            cout << "*";
            m++;
        }
        k = 1;
        while(k<=gaps){
            cout << " ";
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}