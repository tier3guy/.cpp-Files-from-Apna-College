#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n ;

   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }

   for(int i=0;i<n;i++)
   { int sum=arr[i];
     for(int j=i;j<n;j++)
     {
       if(i==j)
       {
         cout<<arr[i]<<endl;
       }
       else
       {
         sum = sum + arr[j];
         cout<<sum<<endl;
       }
     }
   }

   return 0;
}
