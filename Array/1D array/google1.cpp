
/*Isiyana have a theme park . For n coming days each no. of visitors are v(n). Now isiyana have parameters to calculate 
  number of record breaking days . The parametrs are given below ;
  1. if no. of visitors on current day is more than the no. of visitors on the previous days.
  2. if no. of visitors on current day is more than the following day.
  note - first day and last day could a record breaking .
 */


#include"bits/stdc++.h"              
using namespace std;
int main()
{
int n;                                        // n-->days
cin>>n;                                       

int visitors[n];
for(int i=0;i<n;i++){
    cin>>visitors[i];
}

int record =0;
int maxvisitors = visitors[0];
for(int i=1;i<n-1;i++){
    if (visitors[i]>maxvisitors){
        maxvisitors=max(maxvisitors,visitors[i]);
        if (visitors[i]>visitors[i+1]){
           record++;
        }
        else{
            continue;
        }
    }
    else{
        continue;
    }
}
if(visitors[0]>visitors[1]){
    record++;
}
if (visitors[n-1]>maxvisitors){
    record++;
}

cout<<record<<endl;
return 0;
}