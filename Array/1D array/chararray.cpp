#include<iostream> 
using namespace std;
int main()
{
char arr[8];
cin >> arr;
int i=0;
while(arr[i]!='\0'){
    cout<<arr[i];
    i++;
}
cout<<endl;
return 0;
}