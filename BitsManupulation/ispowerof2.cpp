#include<iostream>
using namespace std;

bool isPowerof2(int n){
    return (n && !(n & n-1));
}

int main(){
    int n;
    cin >> n;
    cout << isPowerof2(n);
    return 0;
}