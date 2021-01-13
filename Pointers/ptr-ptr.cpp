// creating a pointer which will store the address of other pointer.
#include<iostream> 
using namespace std;
int main()
{
int a=10;
int *p;
p=&a;   
cout<<*p<<endl;        // output ---> 10

int **q=&p;
cout<<q<<endl;
cout<<*q<<endl;        // output ---> address of p
cout<<**q<<endl;
return 0;
}