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

    if(a>b)
       {
           if(a>c)
           {
               cout<<"the greatest value is"<<a<<endl;
           }
           else
           {
               cout<<"the greatest value is "<<c<<endl;
           }
           
       }
    else
    {
        if(b>c)
        {
            cout<<"the greatest the value is "<<b<<endl;
        }
        else
        {
            cout<<"the greatest value is "<<c<<endl;
        }
        
    }

    return(0);

    
       
}