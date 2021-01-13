#include<iostream>
using namespace std;

void printTillDesending(int n){
    if(n==1){
        cout << n << " " << endl;
        return;
    }
    cout << n << " ";
    printTillDesending(n-1);
}
void printTillAscending(int n){
    if(n==1){
        cout << n << " ";
        return;
    }
    printTillAscending(n-1);
    cout << n << " ";
}

int main(){

    printTillDesending(10);
    printTillAscending(10);
    cout << endl;
    return 0;
}