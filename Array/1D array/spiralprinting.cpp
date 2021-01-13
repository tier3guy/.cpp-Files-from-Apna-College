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

int start_row=0;
int start_colun=0;
int end_row=n-1;
int end_colun=m-1;

while(start_row<=end_row && start_colun<=end_colun){
    
    //for first row
    for(int col=start_colun;col<=end_colun;col++){
        cout<<arr[start_row][col]<<" ";
    }
    start_row++;
    
    //for last colun
    for(int row=start_row;row<=end_row;row++){
        cout<<arr[row][end_colun]<<" ";
    }
    end_colun--;
    
    // for last row
    for(int col=end_colun;end_colun>=start_colun;col++){
        cout<<arr[end_row][col]<<" ";
    }
    end_row--;
    
    //for first col
    for(int row=end_row;row>=start_row;row++){
        cout<<arr[row][start_colun]<<" ";
    }
    start_colun++;
    
    }
return 0;
}