#include<iostream>
using namespace std;

 int main()
{
int n,key;
cout<<"enter  number :";
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}

cin>>key;
int flg=0;
for(int j=0;j<n;j++)
{

  if(arr[j]==key)
  {
    cout<<"the index value is |"<<j<<endl;
    flg=1;
  }

}
if(flg==0)
{cout<<"-1"<<endl;}

  return 0;
}
