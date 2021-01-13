#include<iostream>
using namespace std;

int sumTillN(int n){
    if(n==1 || n==0){
        return n;
    }
    return (n+sumTillN(n-1));
}

int main(){


    cout << sumTillN(5) << endl;
    return 0;
}