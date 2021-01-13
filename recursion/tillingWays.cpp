#include<iostream>
using namespace std;

int tillingWays(int columns){
    if(columns==0){
        return 0;
    }
    if(columns==1){
        return 1;
    }
    return (tillingWays(columns-1)+tillingWays(columns-2));
}

int main(){
    cout << tillingWays(5) <<endl;
    return 0;
}