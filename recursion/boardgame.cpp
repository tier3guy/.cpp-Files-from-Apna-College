#include<iostream>
using namespace std;

int coutpath(int start,int end){
    if(start > end){
        return 0;
    }
    if(start == end){
        return 1;
    }
    int totalPath = 0;
    for(int i=1;i<=6;i++){
        totalPath += coutpath(start+i,end);
    }
    return totalPath;
}

int main(){
    cout << coutpath(0,3) << endl;
    return 0;
}