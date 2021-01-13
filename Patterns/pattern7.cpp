/* we will pattern like this ---> input =5
output ----->

1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1                                                      */

#include<iostream>
using namespace std;

 int main()
 {
 	int n;
 	cout<<" INPUT : ";
 	cin>>n;
 	
 	for( int i=n;i>=1;i--)
 	{
 		int a=1;
 	   	for( int j=1;j<=i;j++)
 	   	{
 	   		cout<<a<<" ";
 	   		a++;
		}
		cout<<endl;
	}
 	
 	
 	return 0;
 }
