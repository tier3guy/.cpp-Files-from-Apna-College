#include<iostream>
using namespace std;

int nRaisedP(int n,int p){
    if(p==0){
        return 1;
    }
    return n*(nRaisedP(n,p-1));
}

int main(){
    cout << nRaisedP(2,5)  << endl;
    return 0;
}