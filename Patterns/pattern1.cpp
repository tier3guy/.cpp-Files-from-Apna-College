/*   lets assume user inputs 5 as input the have to print this

						               *
                           **
                           ***
                           ****
                           *****
 */
// programme execution

#include<iostream>
using namespace std;

int main()
{

	int n;
	cout<<"ENTER ANY INTEGER : ";                     // ansking user for input
	cin>>n;                                           // stoing user input

	cout<<" HERE'S YOUR PATTERN -----> "<<endl;

    for(int i=1;i<=n;i++ )                            // code to get the pattern
	{
	    for(int j=1;j<=i;j++)
		{
		    	cout<<"* ";
		}
		cout<<endl;
	}

	return 0;
}
