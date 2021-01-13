#include<iostream>
using namespace std;

int main(){

    /**************** TAKING INPUT ****************/
    int n;
    cout << "ENTER SIZE OF SQUARE ARRAY : " ;
    cin >> n;
    int array2D[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> array2D[i][j];
        }
    }
    //transposeArray(array2D,n);
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(i>j){
                int temp = array2D[i][j];
                array2D[i][j] = array2D[j][i];
                array2D[j][i] = temp;
            }
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << array2D[i][j] << " ";
        }cout << endl;
    }
    return 0;
}