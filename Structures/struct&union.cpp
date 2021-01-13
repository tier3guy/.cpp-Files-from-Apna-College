/* structures are the user defined data types to store multiple values of another kind to store multiple values of same
   kind we use arrays */

 #include<iostream>   
 using namespace std;

struct student
{
  int roll;
  float f;
  char ch;
};

union money
{
  //same as struct but it alloctes only one datatype at a time.
  int a;
  char ch;
  float f;
};
int main()
{
   union money m1;
   m1.f=56.23;
   m1.ch='l';
   cout<<m1.ch;

   return 0;
}
