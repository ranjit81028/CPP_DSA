#include <bits/stdc++.h>
using namespace std;
void printPattern1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            cout << "*";
        }
        for(int j = 1; j <= 2*(i-1); j++){
            cout << " ";
        }
        for(int j = 1; j <= n - i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int j = 1; j <= 2*(n - i); j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    printPattern1(n);
    printPattern2(n);
    return 0;
}