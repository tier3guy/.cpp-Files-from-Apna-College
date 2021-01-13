// to find the length of the longest arithmetic subarray.
// what is arithmetic subarray ? ----> subarrays in which difference of adjacent elements are same , similar to arthimetic progression.

#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int arr[n];
   for(int i=0 ; i<n; i++)
   {
     cin>>n;
   }

   int minlength = 2;
   int pd=arr[1]-arr[0];
   int ans=2;
   for(int i=1;i<n-1;i++)
   {
    int cd=arr[i+1]-arr[i];
     if(cd==pd)
     {
        minlength++;
     }
     else
     {
       pd=arr[i+1]-arr[i];
     }
     ans=max(ans,minlength);
   }
   cout<<ans<<endl;

   return 0;
}
