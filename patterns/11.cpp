#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
for(int i = 1; i <= n; i++){
    if(i%2 == 0){
        for(int j = 1; j <= i; j++){
            if(j%2 == 0){
                cout << "0 ";
            }
            else cout << "1 "; 
        }
    }
    else {
        for(int j = 1; j <= i; j++){
            if(j%2 == 0){
                cout << "1 ";
            }
            else cout << "0 ";
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