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

   for(int i=0;i<n;i++)
   {   
     for(int k=n-1;k>=0;k--)
         {
             for(int j=i;j<=k;j++)
               {
                  cout<<arr[j]<<" ";
               }
               cout<<endl;
         }
   }
   return 0;
}
