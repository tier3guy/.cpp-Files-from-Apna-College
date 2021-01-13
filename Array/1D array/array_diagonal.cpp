#include<iostream>
using namespace std;

int main()
{
      int n;
      cin>>n;

      int arr[n][n];
      for(int j=0;j<n;j++)
      {
          for(int i=0;i<n;i++)
          {
            cin>>arr[i][j];
          }
      }

        if(n==1)
           {cout<<"0"<<endl;}


        else if(n==2)
           {
             int l=arr[0][0]+arr[1][1];
             int r=arr[0][1]+arr[1][0];
             if (l>=r)
             { cout<<l-r<<endl;}
             else
             { cout<<r-l<<endl;}
           }

        else
        {  int l=0;
           int r=0;

           if (n%2==0)
           {

           for(int j=0;j<n;j++)
             {
                 for(int i=0;i<n;i++)
                   {
                       if(i==j)
                       {
                         l = l + arr[i][j];
                       }
                       else if(i+j==n-1)
                       {
                         r= r + arr[i][j];
                       }
                       else
                       {
                         continue;
                       }
                   }
             }
             if (l>=r)
             { cout<<l-r<<endl;}
             else
             { cout<<r-l<<endl;}

           }

           else
           {

           for(int j=0;j<n;j++)
             {
                 for(int i=0;i<n;i++)
                   {
                       if(i==j && i!=n/2)
                       {
                         l=l+arr[i][j];
                       }
                       else if(i+j==n-1 && i!=n/2)
                       {
                         r=r+arr[i][j];
                       }
                       else
                       {
                         continue;
                       }
                   }
             }
             if (l>=r)
             { cout<<l-r<<endl;}
             else
             { cout<<r-l<<endl;}

           }

         }

      return (0);
}
