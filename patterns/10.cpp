#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i = 1; i < 2*n; i++){
        if( i > n){
            for(int j = 1; j <= (2*n - i); j++){
                cout << "* ";
            }
        }else{
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
    }
    cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    printPattern(n);
    return 0;
}