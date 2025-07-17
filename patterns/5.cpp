#include <bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (n + 1) - i; j++){
            cout << "* ";
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