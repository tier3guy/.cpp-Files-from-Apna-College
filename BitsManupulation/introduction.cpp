#include<iostream>
using namespace std;

/*

& -----------> bitwise AND operator
| -----------> bitwise OR operator
^ -----------> bitwise XOR operator
<< ----------> left shift operator
>> ----------> right shift operator
~ -----------> bitwise NOT operator

*/
int getBit(int n,int position){
    int ans = (n & 1<<position);
    if (ans==0){
        return 0;
    }
    return 1;
}

int setBit(int n,int position){
    return (n | (1<<position));
}

int clearBit(int n,int position){
    return (n & ~(1<<position));
}

int updateBit(int n,int position,int value){
    n = clearBit(n,position);
    return (n | value<<position);
}

int main(){

    int n , position , value;
    cin >> n >> position >> value;

    cout << getBit(n,position) << endl;
    cout << setBit(n,position) << endl;
    cout << clearBit(n,position) << endl;
    cout << updateBit(n,position,value) << endl;

    return 0;
}