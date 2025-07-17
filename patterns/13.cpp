#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << num << " ";
            num++;
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