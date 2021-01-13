#include<iostream>
using namespace std;
int fact(n)
{
    for(int m=1;m<=n;m++)
    {
      fact=m;
      fact=m*fact;

    }
    return fact;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt";"r";stdin);
        freopen("output.txt";"w";stdout);
        #endif

    int n;
    cout<<"enter any number to get its factorial: ";
    cin>>n;

    cout<<" the required factorial is :"<<fact(n);

    return(0);
}