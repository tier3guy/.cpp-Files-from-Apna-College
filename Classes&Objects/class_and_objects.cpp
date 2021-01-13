//           object oreiented programming : it is just an approach to handle a programme ,or we can say it is a try a make a progrramme bug free .again it is a try 
//           to make bug free c++ is nothing but c with opps 

// WHY OOPS? ---> when ever a programme size increases in complex programming , it becomes very difficult to read it , maintain it ,finding bugs and all that stuff.
//                then we find the need of this oops , by using oops concept it will become very easy to access a programme, even that c++ was introduced just to 
//                introduce oops . oops also provides data security .{ we will learn how later}

// BASIC TERMINOLOGY :

//       1.CLASSES ---> just a template to create objects
//       2.OBJECTS ---> basic run time entities.
//       3.DATA ENCAPSULATION AND ABSTRACTION ---> wrapping data and function into singal unit
//       4.INHERITANCE ---> makes work easier as classes and inheritate their property , so no need to write same code just need edit the code a little
//       5.POLYMORPHISM ---> ability to take more than one forms
//       6.DATA BINDING---> code will not execute untill programme runs.

#include<iostream>
#include<string>
using namespace std;

class student                 //              this is the way to define a class , here I created a *student* a class
{
	
	private : int a,  b, c;   //              private is a key here for data security , so that no-one can access these data outside ,
	                          //              these values are only accesseable by some fuction of these class --> here setdata


	public  : int d,e;        //              public is key so that these values are accessable outside also
	
    void setdata( int a1 , int b1 , int c1);
	void getdata()
	{
    	cout<<a<<endl;
    	cout<<b<<endl;
    	cout<<c<<endl;
    	cout<<d<<endl;
     	cout<<e<<endl;
	}
	
};

void student:: setdata(int a1,int b1,int c1)
{
     a=a1;
     b=b1;
     c=c1;
}


int main()
{

	student avinash ;             // here I created *avinash* a object of class student .
	
	avinash.d=78;                 // see d and e can be accessable here like this but we cant do this with a,b or c ; that will give us error
	avinash.e=56;
    
	avinash.setdata(8,6,4);       // we can only access a,b,c by this setdata function as it is defined inside the student class.
	avinash.getdata();
	
	return 0;
}
