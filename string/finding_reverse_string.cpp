#include"bits/stdc++.h"
using namespace std;
int main()
{
string str ;
getline(cin,str);
// printing reverse string 
for(int i=str.size();i>=0;i--){
  cout<< str[i] ;
}
cout<<endl<<"your reverse order is printed."<<endl;
return 0;
}