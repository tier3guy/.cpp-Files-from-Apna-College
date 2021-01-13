#include<iostream>
using namespace std;

class student{
    private:  // these are called access modifiers 
        int marks;
    public:
        string name;
        int roll;          // these are called data member.
        int Class;
        char sec;

        void setmarks(int Smarks){   // these are called member fuction.
            marks = Smarks;
        }

        void printInfo(){
            cout << name << " " << Class << " " << sec << " " << roll << " " << "marks = " << marks << endl; 
        }
//  protected:
        /* there is one more access modifier called protected which do the same fuctionality except one thing i.e when ever we want inherit one data member to other class without allowing user to access it , we can do that using protected.
        
        we will definately see this in inheritance chapter. */
};

int main(){
    student aviboy;

    aviboy.name = "avinash";
    aviboy.roll = 77;
    aviboy.Class = 13;
    aviboy.sec = 'b';
  //aviboy.marks = 490;  we definately cant do this because we freezed the access marks till the class

    aviboy.setmarks(490);  // here setmarks is public so we can access marks from setmarks or we have to change marks from class only.

    aviboy.printInfo();

    return 0;
}