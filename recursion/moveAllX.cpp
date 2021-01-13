#include<iostream>
using namespace std;

string moveAllX(string str){
    if(str.length()==0){
        return "";
    }

    char subX = str[0];
    string remainingStr = str.substr(1);
    if(subX=='x'){
        return (moveAllX(remainingStr)+subX);
    }
    return (subX+moveAllX(remainingStr));
}

int main(){

    cout << moveAllX("avixxxxnxxasxh") << endl;
    return 0;
}