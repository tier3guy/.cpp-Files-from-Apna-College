/* we will gonna print the pattern like this ----> input = 5
output ---->   

1
2  3
4  5  6 
7  8  9  10
11 12 13 14 15                                                        */

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"INPUT : ";
	cin>>n;
	int a=1;
	
	for( int i=1;i<=n;i++)
	{
		for ( int j=1;j<=i;j++)
		{
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	}
	
	return 0;
}
