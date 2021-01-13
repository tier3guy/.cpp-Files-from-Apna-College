#include<iostream>
using namespace std;

void prime( int p)
{
  bool flag =1;
  for(int i=2;i<p;i++)
  {
    if(p%i==0){ flag=0;
    break;}
  }
  if(flag==1){cout<<p<<endl;}

}

int main()
{
  int a,b;
  cin>>a>>b;

  for( int j=a+1;j<b;j++)
  {
    prime(j);
  }

  return 0;
}
