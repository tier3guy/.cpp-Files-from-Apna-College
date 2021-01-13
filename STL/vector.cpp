
//vector is same as array , it provides us continous storage of data . however there is big difference between array and vector that provide dynamic
   //memory allocation , that means in array we first define the size of the array and further we cant change it but vector provides this feature
   //and memory is allocated dynamically as we changes our input.

#include<iostream>
#include<vector>     //NOTE: to use syntax required to execute a vector we need to include (vector)-->header file
using namespace std;

int main()
{
  vector<int> v;    //this the syntax to create a vector of datatye interger , v is the name of the vector given by the programmer
  v.push_back(25);
  v.emplace_back(50);   //push_back or emplace_back does the same work i.e to insert values into the vector.
  v.push_back(75);
  v.insert(v.begin(),2,10);  //another way to insert a value into a vecto(not empty) is to use insert syntax v.begin is the position where i want
                                 // to insert the value , 2-->gives how many times i want to insert , 10--->is the value that we are inserting.
  // the final vector will look like ----> {10 ,10 ,25 ,50 ,75}

  for ( vector<int>::iterator it = v.begin();it!=v.end();it++)   // can use (auto) also instead of  (vector<int>::iterator)
    {
      cout<<*it<<endl;  //in this we created an iterartor (it) that points to first value of the vector.
    }

  v.erase(v.begin()); //---> erase is the syntax use to delete any value in vector

  for ( auto it = v.begin(); it!=v.end(); it++)
  {
    cout<<*it<<endl;
  }

  cout<<v.size()<<endl;   //-->size syntax is use to get how many elements are present in the vector
                                //some imp thing that one should know
                                //.begin() ----> points to the first value in the vector
                                //.rbegin() ---> points to the last value in the vector
                                //.end() ------> points to the next of the last value (gives garbage value on printing)
                                //.rend() -----> points to the previous of the first value .(again gives garbage

  vector<int> v1;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  for (auto it = v.begin();it!=v.end();it++)
  {
    cout<<*it<<endl;
  }

  v.swap(v1);     //.swap is use to swap to vectors
  for (auto ita = v.begin();ita!=v.end();ita++)
  {
    cout<<*(ita)<<endl;

  }

  return 0;
}
