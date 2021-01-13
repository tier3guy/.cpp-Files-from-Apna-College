#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b,c;
    cin>>a>>b>>c;

    if(a==b&&b==c)
    {
        cout<<"the triangle is equilateral."<<endl;
    }
    else if(a==b&&b!=c)
    {
        cout<<"the trianle is isoceles."<<endl;
    }
    else if(b==c&&c!=a)
    {
        cout<<"the triangle is isoceles."<<endl;
    }
    else
    {
        cout<<"the triangle is scalene."<<endl;
    }

    return(0);
    
}