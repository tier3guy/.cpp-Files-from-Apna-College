#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "ENTER SIZE OF THE ARRAY : ";
    cin >> n;
    int arr1[n][n] , arr2[n][n] , ans[n][n];
    
    cout << "ENTER FIRST MATRIX : " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr1[i][j];
        }
    }
    
    cout << "ENTER SECOND MATRIX : " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr2[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                ans[i][j]= arr1[i][k] * arr2[k][j];
            }    
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << " ";
        } cout << endl;
    }
    
    return 0;
}