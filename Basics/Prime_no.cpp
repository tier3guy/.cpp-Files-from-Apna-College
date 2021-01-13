#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif    

int a;
cin>>a;

bool flag=0;

for(int i=2 ;i<a ;i++)
{
    if( a%i==0)
    {
        cout<<"the given number is not prime."<<endl;
        flag=1;
        break;
    }
    
}

if(flag==0)
{
    cout<<"the given number is prime."<<endl;
}

return(0);
}