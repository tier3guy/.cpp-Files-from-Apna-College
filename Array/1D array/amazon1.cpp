// find the first reapting element in an array 
// brute force approach
#include"bits/stdc++.h"
using namespace std;
int main()
{
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if (arr[i]==arr[j]){
            cout<<arr[i]<<" "<<i<<endl;
            return 0;
        }
        else{
            continue;
        }
    }
}
cout<<"-1"<<endl;
return 0;
}