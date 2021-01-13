/*

 whenever we write a code and allocate some memory to some variable , we do that in stack frame but there are some 
   problems with stack frame --->
   1. its size is fixed ( i.e during compilation stack overflow may occur)
   2. variables are local i.e they are limited to respective function only.
   To over come these problems we can use dynamic memory allocation using HEAP(free store) concept . 
   In this we increase or decrease memory sizes according to our comfort.
   
*/

   #include<iostream> 
   using namespace std;

   int main()
   {
      int a=10; // local variable *a* that stores 10 in stack frame
      int *p = new int (10);  // allocates memory in heap
      //int *p = 10;   // p stores in stack containing the address of heap where 10 is stored
      cout<<*p<<endl;
      delete(p); 
      p = new int [4];
      cout<<*p<<endl;
      delete[]p;
      p=NULL;
      return 0;
   }

