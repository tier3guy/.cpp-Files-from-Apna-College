#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    //to print odd numbers upto nth number 
    int n;
    cin>>n;
    
    for(int a=1 ;a<=n; a++)
    {
        if(a%2==0)
        {
        continue;
        }
        else
        {
        cout<<a<<endl;
        }
    }
    
    return(0);

}