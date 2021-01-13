/* array behaves as a pointer . whenever we declare a pointer , we get a variable which points to the zeroth 
 element of the array which is constant we cant increment it or decrement it like a pointer. */

 #include<iostream> 
 using namespace std;
 int main()
 {
 int arr[]={10,20,30,40};
 // arr++;  --> this is illegal .
 for(int i=0;i<4;i++){
     cout<<*(arr+i)<<endl;
     }
 return 0;
 }

