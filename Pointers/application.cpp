// try to increament a value and print it using a function
/*
#include<iostream> 
using namespace std;
void increament(int p){
    p++;
}
int main()
{
int a = 2;
increament(a);                here we are just sending the value of "a" to a local variable "p" ," p" is incremented not "a".
                              THIS IS CALLED CALL BY VALUE.
cout<<a<<endl;                this will print 2
return 0;
}                                           */

// call by reference 
#include<iostream> 
using namespace std;
void increament (int *a){
   *a++;}
void swap(int *p,int *q){
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}
int main()
{
int a=2;
increament(&a);
cout<<a<<endl;
//int a=2;
//int b=4;
//swap(&a,&b);
//cout << a << " " << b <<endl;
return 0;
}