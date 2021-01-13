#include<iostream>
using namespace std;

void series(int q)
{
  int b=0,c=1;
  cout<<b<<" "<<c<<" ";
  for(int i=1;i<=q-2;i++)
  {
    int k=b+c;
    cout<<k<<" ";
    b=c;
    c=k;

  }
  cout<<endl;
}
void fibo(int p)
{
  int x=0,y=1,k;
  for(int i=1;i<=p;i++)
  {
    k=x+y;
    x=y;
    y=k;
  }
  cout<<"sum is : "<<k-1<<endl;

}
int main()
{
   int n;
   cin>>n;
   series(n);
   fibo(n);

  return 0;
}
