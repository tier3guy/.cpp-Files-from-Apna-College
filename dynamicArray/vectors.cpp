#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>  v1;  //  implementation ---> vector<dataType> name;

    v1.push_back(2);  //  push_back adds element at the end
    v1.push_back(3);
    v1.push_back(1);
    sort(v1.begin(),v1.end());

    for(int i=0;i<v1.size();i++){
        cout << v1[i] << " ";
    }cout << endl;              // 1 2 3   <--- output

    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++){
        cout << *it << " ";
    }cout << endl;             //  1 2 3   <--- output

    for(auto element:v1){
        cout << element << " ";
    }cout << endl;             //  1 2 3   <--- output

    vector<int> v2(3,50);      // another way to implement with size and element at each element
    for(auto element:v2){
        cout << element << " ";
    }cout << endl;             //  50 50 50 <--- output

    swap(v1,v2);

    v2.pop_back();             // removes element at the last index
    cout << v2.size() << endl;

    return 0;
}