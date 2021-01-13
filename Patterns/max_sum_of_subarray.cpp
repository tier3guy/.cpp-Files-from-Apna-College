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
   int maximum = -199999;

   for(int i=0;i<n;i++)
   {
     for(int j=i;j<n;j++)
     {
       int sum=0;
       for(int k = i ; k<=j ; k++)
       {
         sum=sum + arr[k];
       }
       maximum = max(maximum,sum);
     }
   }
   cout<<maximum<<endl;

   return 0;
}
