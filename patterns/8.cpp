#include <bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i - 1; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*n - (2*i - 1); j++){
            cout << "*";
        }
        for(int j = 1; j <= i - 1; j++){
            cout << " ";
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