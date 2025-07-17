#include <bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i = 1; i <= n; i++){
        char start = 'A';
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*i - 1; j++){
            cout << start;
            if(j < i ) start ++;
            else start --;
        }
        for(int j = 1; j <= n - i; j++){
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