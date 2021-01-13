//simple calculator
#include<iostream>
using namespace std;

int main()
{
    
    ifndef ONLINE_JUDGE
    freopen
      
    int a,b;  
    char button;
    cin>>a>>b>>button;


    switch (button)
    {
    case 'a':
        cout<<a+b<<endl;
        break;
    case 's':
        cout<<a-b<<endl;
        break;
    
    case 'm':
        cout<<a*b<<endl;
        break;
    case 'd':
        cout<<a/b<<endl;
        break;



    default:
    cout<<"sorry i can do only simple calculation"<<endl;
        break;
    }
    return(0);

}