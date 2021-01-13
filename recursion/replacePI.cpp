#include<iostream>
using namespace std;

string replacePi(string str){
    if(str.length()==0){
        return "";
    }
    if(str[0]=='p' && str[1]=='i'){
        cout << "3.14";
        string remainingstr = str.substr(2);
        return replacePi(remainingstr);
    }
    else{
        cout << str[0];
        return replacePi(str.substr(1));
    }
}

int main(){
    cout << "pipipppiiiipipippiiip" << endl;
    cout << replacePi("pipipppiiiipipippiiip") << endl;
    return 0;
}