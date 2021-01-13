#include<iostream>
using namespace std;

class student{
    public :
        string name;
        int age;
        char gender;

        student(string sname,int sage,char sgender){
            name = sname;
            age = sage;
            gender = sgender;
            cout << "constructor called" << endl;
        }

        void printInfo(){
            cout << "details : " << name << " " << age << " " << gender <<endl;
            cout << "function called " << endl;
        }

        student(student &a){
            name = a.name;
            age = a.age;
            gender = a.gender;
            cout << "copy constructor called" << endl;
        }

        ~student(){
            cout << "deconstructor called" << endl;
        }
};

int main(){

    student avinash("avinash",18,'M');
    avinash.printInfo();
    student sahil(avinash);
    sahil.printInfo();

    return 0;
}