#include <bits/stdc++.h>
using namespace std;
void printPattern(int n){
    char start = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout << start << " ";
        }
        start ++;
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