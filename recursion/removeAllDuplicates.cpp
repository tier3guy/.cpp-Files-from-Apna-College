#include<iostream>
using namespace std;

void removeDuplicates(string str,int i){
    if(i==str.length()){
        cout << str[i] ;
        return ;
    }
    if(str[i]==str[i+1]){
        removeDuplicates(str,i+1);
    }
    else{
        cout<<str[i];
        removeDuplicates(str,i+1);
    }
}

int main(){

    removeDuplicates("aaaaaccbbbbbccaaaddddee",0);

    return 0;
}