// pointer arithmatic 
// we will only do 4 arithmatic operation  ---> ++,--,+,-

#include<iostream> 
using namespace std;
int main()
{
int a=10;
int *pointer;
pointer=&a;
cout<<pointer<<endl;        // ---> this will give address of a.(suppose address is 2000)
cout<<*pointer<<endl;       // ---> this will give value at a. this is also called derefrencing.
*pointer=20;
cout<<a<<endl;              // ---> we can modify the value also.
cout<<pointer++<<endl;      // ---> this will priint 2004 , as integer are 4 bytes.
return 0;
}
