#include<iostream>
using namespace std;

int firstOccur(int array[],int n,int key,int i){
    if(i==n){
        if(array[i]==key){
            return i;
        }
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return firstOccur(array,n,key,i+1);
}

int lastOccur(int array[],int n,int key,int i){
    if(i==0){
        if(array[i]==key){
            return i;
        }
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return lastOccur(array,n,key,i-1);   
}

int main(){

    int array[] = {1,2,3,4,5,4,3,2,9};
    cout << firstOccur(array,9,9,0) << endl;
    cout << lastOccur(array,9,2,8) << endl;

    return 0;
}