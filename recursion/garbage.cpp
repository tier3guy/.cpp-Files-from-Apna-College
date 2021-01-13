/* IMPORTANT */
#include<iostream>
using namespace std;

int knapSack(int weigth[],int value[],int size,int W){

   if(size==0 || W==0){
       return 0;
   }     
   if(W < weigth[size-1]){
       return knapSack(weigth,value,size-1,W);
   }
   return max(knapSack(weigth,value,size-1,W-weigth[size-1]+value[size-1]),knapSack(weigth,value,size-1,W));

}

int main(){
    int weigth[] = {10,20,30};
    int value[] = {100,50,150};
    cout << knapSack(weigth,value,3,50) << endl;
    return 0;
}