#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n][n];

   for( int j=0;j<n;j++)
   {
     for(int i=0;i<n;i++)
     {
       cin>>arr[i][j];
     }
   }

   int p,q;
   cin>>p>>q;
   cout<<arr[p][q];
  return 0;
}
