#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int roll;
        int age;

        void func(){
            cout << "function of student" << endl;
        }

};

class employee: public student{
        int employeeNo;
};

int main(){

    employee employee1;
    employee1.func();

    return 0;
}