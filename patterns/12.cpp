#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 1; j <= 2*(n - i); j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << i - j + 1;
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