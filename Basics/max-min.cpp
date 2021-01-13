#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif    

    int a,b;
    cin>>a>>b;

    if(a>b)
    {
        cout<<"max="<<a<<endl;
        cout<<"min="<<b<<endl;

    } 
    else
    {
        cout<<"max="<<b<<endl;
        cout<<"min="<<a<<endl;
    }
    
    return(0);
}