#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n;i++)
   {
     cin>>arr[i];
   }

   int index =-1 ;
   for(int i=0;i<n-1;i++)
   {
     for(int j=i+1;j<n;j++)
     {
       if (arr[i]==arr[j])
       {
         index =i;
         cout<<index<<" ";
         return 0 ;
       }
       else
       {
         continue;
       }
     }
   }
   if (index==-1)
   {
     cout<<"-1"<<endl;
   }

   return 0;
}
