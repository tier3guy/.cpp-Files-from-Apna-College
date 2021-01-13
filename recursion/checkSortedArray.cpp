#include<iostream>
using namespace std;

bool checkArray(int array[],int n){
    if(n==1){
        return true;
    }

    if(array[n-1]>=array[n-2]){
        return (true && checkArray(array,n-1));
    }
    else{
        return false;
    }
    
}

int main(){
    int array[]= {1,1,2,3,5,6,11,9};

    cout << checkArray(array,8) << endl;

    return 0;
}