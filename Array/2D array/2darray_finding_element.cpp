#include<iostream> 
using namespace std;
int main()
{
int n,m;
cin >> n >> m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int key;
cin>>key;
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(key==arr[i][j]){
            cout<<i <<" "<<j<<endl;
            flag = true;
        }
        else{
            continue;
        }
    }
}
if (flag==false){
    cout<<"-1"<<endl;
}
return 0;
}