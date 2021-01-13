#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }

   int findmax= -199999;
   for(int i=0;i<n;i++)
   {
     findmax=max(arr[i],findmax
     cout<<findmax<<endl;
   }
   return 0;
}
