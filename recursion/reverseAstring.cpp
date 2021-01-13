#include<iostream>
using namespace std;

string reverseString(string str){
    if(str.length()==0){
        return "";
    }

    string remainingStr = str.substr(1);
    return (reverseString(remainingStr)+str[0]);


}

int main(){

    cout << reverseString("avinash") << endl;

    return 0;
}