/*                                        Inverted Triangle 
                                        *********************
			 lets assume if user gives his or her input as 5 then print this 
			 
		                                          * 
										        * *
										      * * *
										    * * * *
										  * * * * *	                                  */
								
#include<iostream>
using namespace std;

int main()
{

int n;
cout<<" ENTER ANY INTERGER : ";
cin>>n;

for( int i=1;i<=n;i++)
{
	for( int j=1;j<=(n-i);j++)
	{
		cout<<"  ";
	}
	
	for( int k=1;k<=i;k++)
	{
		cout<<" *";
	}
	
	cout<<endl;
}

return 0;

}										  
										  
		
