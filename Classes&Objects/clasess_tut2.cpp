	/*                                                            <---- SUMMARY ---->                                                                                              *\
	                                                             **********************
	
	                      1. OOPs ----> classes and objects 
	                      2. c++ --->initialy called c with classes by stroustroup
	                      3. classes ----> are the extension of structures ( in c )
                          
						  4. structures had limitations
		                            -- members are public 
		                            -- no methods ( we cant define functions into structures )    
                          
						  5. classes ----> structures + more
	                      6. classes ----> classes can have methods ( functions) and properties ( inputs )
	                      7. structures in c++ are typedefed
	
	                      8. we can declare objects along with class like this --->
	           	                    class student 
				                    {
			                                   //	class defination
			                        } harry , avinash , lovish;    

	                      9. avinash.a=5; makes no sence if a is private                                                                                                     */ 


#include<iostream>
#include<string>
using namespace std ;

class binary                                                     // here class called binary is created .
{
	string s;                                                     // this is property 
	void chk_binary();                                             
	
	public :                                                   
	    void read();                                             // these are methods .                                     
		void once_compliment();        
		void display();                                                                                                          
};                                                              

void binary::read()                                          
{
    cout<<"ENTER A BINARY NUMBER : ";
	cin>>s;	
}

void binary::chk_binary() 
{
	for(int i=0;i<s.length();i++)
   {
            if(s.at(i)=='0' || s.at(i)=='1')
	         {
		          continue;
	         }
         	else
           	 {
	              cout<<"we asked you for binary number."<<endl;
				  break;	
	         }	
   }
}

void binary::once_compliment()
{
	chk_binary();
	for(int i=0;i<s.length();i++)
    {
    	     if(s.at(i)=='0')
	         {
		          s.at(i)='1';
	         }
         	else if (s.at(i)=='1')
           	 {
	              s.at(i)='0';
	         }
			 else{
				 continue;
			 }
    }
    
}

void binary:: display()
{
	cout<<"THE REQUIRED ONCE COMPLIMENT : ";
	for (int i=0; i<s.length();i++){
		
		cout<<s.at(i);
	}
	cout<<endl;
}
int main()
{
	binary bin;
	bin.read();
	bin.once_compliment();
	bin.display();
	
	return 0;
}	
	
