#include<iostream>
using namespace std;

int main()
{

       #ifndef ONLINE_JUDGE
              freopen("input.txt","r",stdin);
              freopen("output.txt","w",stdout);
       #endif      


       char input;
       cin>>input;

       switch(input)
       {
           case 'a':
                 cout<<"its vowel"<<endl;
                 break;
           case 'e':
                 cout<<"its vowel"<<endl;
                 break;   
           case 'i':
                 cout<<"its vowel"<<endl;
                 break;
           case 'o':
                 cout<<"its vowel"<<endl;
                 break;
           case 'u':
                 cout<<"its vowel"<<endl;
                 break;

       default:

        cout<<"its consonent"<<endl;
                 break;      

       }


    return(0);
}