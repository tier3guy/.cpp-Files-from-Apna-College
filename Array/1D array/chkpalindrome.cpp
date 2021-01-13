#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
      cin>> n;

    char arr[n+1];
      cin >> arr;
          for(int i=0;arr[i]!='\0';i++)
          {
              if (arr[i]==arr[n-1-i]){
                  continue;
              }
              else{
                  cout<<"not palindrome"<<endl;
                  return 0;
              }

          }

    cout<<" palindrome "<<endl;
return 0;
}