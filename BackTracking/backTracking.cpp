  /*

  Backtracking : Backtracking is a algorithmic-tecnique for solving problems
                 recursively by trying to build a solution incrementally ,
                 one piece at a time , removing those solution that fail to
                 satisfy the constraints of the problem at any point of time.

  */

  /* Question 1 :   Rat in a maze. */

  #include"bits/stdc++.h"
  using namespace std;

  bool isSafe(int** arr,int n,int x,int y){
    if(x<n && y<n && arr[x][y]==1){
      return true;
    }
    return false;
  }

  bool Backtracking(int** arr,int n,int x,int y,int** solution){
    if(x==n-1 && y==n-1){
      solution[x][y] = 1;
      return true;
    }
    if(isSafe(arr,n,x,y)){
      solution[x][y] = 1;
      if(Backtracking(arr,n,x+1,y,solution)){
        return true;
      }
      if(Backtracking(arr,n,x,y+1,solution)){
        return true;
      }
      solution[x][y] = 0;
      return false;
    }
    return false;
  }

  int main(){
     int n;
     cin >> n;

     int** arr = new int*[n];
     for(int i=0;i<n;i++){
       arr[i] = new int[n];
     }
     for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
         cin >> arr[i][j];
       }
     }

     int** solution = new int*[n];
     for(int i=0;i<n;i++){
       solution[i] = new int[n];
       for(int j=0;j<n;j++){
         solution[i][j] = 0;
       }
     }

     if(Backtracking(arr,n,0,0,solution)){
       cout << endl;
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
           cout << solution[i][j] << " ";
         }cout << endl;
       }
     }

     return 0;
  }
