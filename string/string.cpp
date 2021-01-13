#include"bits/stdc++.h"
using namespace std;
/* string are used to store characters , thats it ... one can think of the example like storing name or address of a place for that we some method
 and thats why strings are used. */
int main()
{
  /* one amazing method is by using char array but in c++ we have some extra features that is called string , 
  if one likes to store by using he or she can go but there is one difference that is *string is dynamic* in nature
   and if we dont know the size we cant use array there  */

  // HOW TO IMPLEMENT A STRING
  //***************************
  string s(" avinash wants a job ");   // here s is the name of the string that we created.
  cout << s <<endl ;     // output -->  avinash wants a job

  string s1;
  s1 = " avinash wants a job ";   // this is the another method to print a string.
  cout << s1 << endl;

  // HOW TO COPY A STRING
  // **********************

  string s2 , s3 ;
  s2=s1;
  cout << s2 << endl;  // simple created a string s2 and assign the value of s1

   s3.assign(s2);
   cout<< s3 << endl;  // another method to copy things using assign syntax.

   // HOW TO PRINT A *PARTICULAR* CHARCTER OF A STRING .
   //**************************************************      ans. same as we did in array , string also follows the same indexing that starts from 0.

   cout<< " " <<s3[1] << " " << s3[2] <<endl;     // same as array.
   cout<< " " <<s3.at(1) << " " << s3.at(2) <<endl; // another way to do this.

   // HOW TO KNOW THE SIZE OF A STRING
   //***********************************  syntax: (name of string).length()

   cout<<"the length of the string is : "<<s.size()<< " " <<s.length()<<endl;
   /* CONCEPT OF getline() --->
  lets assume if we want to give a string as input such full name for eg. Avinash Gupta and if we are using 
  cin>>string ; then this will take Avinash only but not the Gupta as cin stops taking string after spaces. so to handle 
  this we have getline function.*/

  string s4,s5;
  //cout<<" enter your full name : ";
  //cin>>s4;                                   input -------> Avinash Gupta
  //cout<<s4<<endl;                            output ------> Avinash

  cout<<" enter your full name : ";
  getline(cin,s5);
  cout <<" good moring "<<s5<< endl;

  // HOW TO SWAP TO STRINGS
  //************************
   string a("avinash"),b(" Gupta");
   cout<<" "<<a<<" "<<b<<endl;
   a.swap(b);
   cout<<" "<<a<<" "<<b<<endl;

  // HOW TO FIND A WORD IN A SENTENCE STRING AND REPLACE THAT WORD
  //***************************************************************
  string c("i am a IT engineer who wants cse");    //  note : if suppose there are two engineer then it will return only for the first one.
  int k= c.find("engineer");
  cout<<k<<endl;                             // output --> 10
                                             //now i want to replace engineer with professional.
  c.replace(10,8,"professional");    // syntax-->  name.replace(index_from_where_uhh_start,size,"new word")
  cout<<c <<endl;

  // CONCEPT OF SUB-strings            sub-strings are a part of mother string , for eg. from above *wnats cse* can be a substring
  // ************************
  cout<<c.substr(10,8)<<endl;        // syntax --> name.substr(start-point-index, size)

  // HOW TO ERASE SOMETHING FROM A STRING
  //**************************************

  c.erase(10,12);   // syntax--> name.erase(start-index,size)
  cout<<c;

  return 0;
}
